#!/bin/sh
export KERNELDIR=`readlink -f .`
export PARENT_DIR=`readlink -f ..`
export RAMFS_SOURCE=`readlink -f $KERNELDIR/k2wl/ramdisk`
export USE_SEC_FIPS_MODE=true
export KBUILD_BUILD_VERSION="0.2"
export BUILD_VERSION="K2wl-SGGRAND-v0.2"

if [ "${1}" != "" ];then
  export KERNELDIR=`readlink -f ${1}`
fi

RAMFS_TMP="/tmp/ramfs-source"

make mrproper

if [ ! -f $KERNELDIR/.config ];
then
  make i9082_defconfig
fi

. $KERNELDIR/.config

export ARCH=arm

cd $KERNELDIR/
nice -n 10 make -j4 || exit 1

#remove previous ramfs files
rm -rf $RAMFS_TMP
rm -rf $RAMFS_TMP.cpio
rm -rf $RAMFS_TMP.cpio.gz
find -name '*.ko' -exec rm {} $KERNELDIR/k2wl/zip/customize/expmodules/ \;
#copy ramfs files to tmp directory
cp -ax $RAMFS_SOURCE $RAMFS_TMP

#clear git repositories in ramfs
find $RAMFS_TMP -name .git -exec rm -rf {} \;

#remove empty directory placeholders
find $RAMFS_TMP -name EMPTY_DIRECTORY -exec rm -rf {} \;
rm -rf $RAMFS_TMP/tmp/*

#remove mercurial repository
rm -rf $RAMFS_TMP/.hg

#Remove write permissions from ramfs
#chmod -R g-w $RAMFS_TMP/*

#copy modules into ramfs
#mkdir -p $KERNELDIR/k2wl/ramdisk/lib/modules

find -name '*.ko' -exec cp -av {} $KERNELDIR/k2wl/zip/customize/expmodules/ \;
find -name 'zImage' -exec cp -av {} $KERNELDIR/k2wl/ \;
#commented out for now
#${CROSS_COMPILE}strip --strip-unneeded $RAMFS_TMP/lib/modules/*

cd $KERNELDIR/k2wl/
#find | fakeroot cpio -H newc -o > $RAMFS_TMP.cpio 2>/dev/null
#ls -lh $RAMFS_TMP.cpio
#gzip -9 $RAMFS_TMP.cpio
#cd -

mkbootimg --base 0 --pagesize 4096 --kernel_offset 0xa2008000 --ramdisk_offset 0xa3000000 --second_offset 0xa2f00000 --tags_offset 0xa2000100 --cmdline 'console=ttyS0,115200n8 mem=832M@0xA2000000 androidboot.console=ttyS0 vc-cma-mem=0/176M@0xCB000000' --kernel zImage --ramdisk ramdisk.cpio.gz -o Sboot.img

# copy all needed to k2wl kernel folder.
stat $KERNELDIR/k2wl/Sboot.img
cp $KERNELDIR/k2wl/Sboot.img /$KERNELDIR/k2wl/zip/
cd $KERNELDIR/k2wl/zip
zip -r $BUILD_VERSION.zip *
rm $KERNELDIR/k2wl/Sboot.img
rm $KERNELDIR/k2wl/zip/Sboot.img
