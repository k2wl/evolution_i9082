# evolution kernel compilation script


# Confirm 'make clean'
clear
echo "Compiling nebula kernel..."
echo -e "\n\nDo you want to make clean? \n"
echo -e "1. Yes"
echo -e "2. No"
read askclean


# Specify colors for shell
red='tput setaf 1'
green='tput setaf 2'
yellow='tput setaf 3'
blue='tput setaf 4'
violet='tput setaf 5'
cyan='tput setaf 6'
white='tput setaf 7'
normal='tput sgr0'
bold='setterm -bold'
date="date"


# Kernel compilation specific details
export KBUILD_BUILD_USER="k2wl"
KERNEL_BUILD="EvolutionKernel-v1.3-k2wl-`date '+%Y%m%d-%H%M'`"
TOOLCHAIN=/home/k2wl/k2wl-linaro-4.8/bin/arm-cortex_a9-linux-gnueabi-

#ftpstuff
RETRY="60s";
MAXCOUNT=30;
HOST="androidfilehost.com"
USER="k2wl"
PASS='uDRMO4mgC2'


# Variables
MODULES=./output/flashablezip/system/lib/modules


# Cleaning files from previous build
$cyan
if [ "$askclean" == "1" ]
then
	echo ""
	echo ""
        echo -e "\n\nCleaning... \n\n"
	echo ""
	echo ""
        make clean mrproper
fi

rm -rf arch/arm/boot/boot.img-zImage
rm -rf output/bootimg_processing
rm -rf output/flashablezip/system
rm -rf output/boot.img
echo ""
echo ""
echo "==========================================================="
echo ""
echo ""


# Copy prebuilt drivers
#cp ../drivers/voicesolution/VoiceSolution.ko drivers/voicesolution/

# Making config for evolution kernel
$violet
echo ""
echo ""
echo "Making config for evolution kernel..."
echo ""
echo ""
make cm_i9082_defconfig
echo ""
echo ""
echo "==========================================================="
echo ""
echo ""


# Compiling kernel
$red
echo ""
echo ""
echo "Compiling kernel..."
echo ""
echo ""
make -j16
echo ""
echo ""
echo "==========================================================="
echo ""
echo ""


# Processing boot.img
$yellow
echo ""
echo ""
echo "Processing boot.img..."
echo ""
echo ""
mkdir output/bootimg_processing
cp bootimg/stockbootimg/boot.img output/bootimg_processing/boot.img
cd output/bootimg_processing
rm -rf unpack
rm -rf output
rm -rf boot
mkdir unpack
mkdir outputbootimg
mkdir boot
cd unpack

echo ""
echo ""
echo "Extracting boot.img..."
echo ""
echo ""
../../../processing_tools/bootimg_tools/unmkbootimg -i ../boot.img
cd ../boot
gzip -dc ../unpack/ramdisk.cpio.gz | cpio -i
cd ../../../
echo ""
echo ""
echo "==========================================================="
echo ""
echo ""


# Copying the required files to make final boot.img
$green
echo ""
echo ""
echo "Copying output files to make the final boot.img..."
echo ""
echo ""
cp arch/arm/boot/zImage arch/arm/boot/boot.img-zImage
rm output/bootimg_processing/bootimage/unpack/boot.img-zImage
cp arch/arm/boot/boot.img-zImage output/bootimg_processing/unpack/boot.img-zImage	
rm boot.img-zImage
echo ""
echo ""
echo "==========================================================="
echo ""
echo ""


# Processing modules to be packed along with final boot.img
cd output/flashablezip
mkdir system
mkdir system/app
mkdir system/lib
mkdir system/lib/modules
cd ../../

find -name '*.ko' -exec cp -av {} $MODULES/ \;

$red
echo ""
echo ""
echo "Stripping Modules..."
echo ""
echo ""
cd $MODULES
for m in $(find . | grep .ko | grep './')
do echo $m
$TOOLCHAIN-strip --strip-unneeded $m
done
cd ../../../../../
echo ""
echo ""
echo "==========================================================="
echo ""
echo ""


# Making final boot.img
$blue
echo ""
echo ""
echo "Making output boot.img..."
echo ""
echo ""
cd output/bootimg_processing/outputbootimg

../../../processing_tools/bootimg_tools/mkbootfs ../boot | gzip > ../unpack/boot.img-ramdisk-new.gz

rm -rf ../../output/bootimg_processing/boot.img
cd ../../../

processing_tools/bootimg_tools/mkbootimg --kernel output/bootimg_processing/unpack/boot.img-zImage --ramdisk output/bootimg_processing/unpack/boot.img-ramdisk-new.gz -o output/bootimg_processing/outputbootimg/boot.img --base 0 --pagesize 4096 --kernel_offset 0xa2008000 --ramdisk_offset 0xa3000000 --second_offset 0xa2f00000 --tags_offset 0xa2000100 --cmdline 'console=ttyS0,115200n8 mem=832M@0xA2000000 androidboot.console=ttyS0 vc-cma-mem=0/176M@0xCB000000'

rm -rf unpack
rm -rf boot
echo ""
echo ""
echo "==========================================================="
echo ""
echo ""


# Making output flashable zip
$green
echo ""
echo ""
echo "Making output flashable zip and packing everything..."
echo ""
echo ""
cd output/flashablezip/
mkdir outputzip
mkdir outputzip/system
mkdir outputzip/system/app
mkdir outputzip/system/lib
mkdir system
mkdir system/lib

cp -avr META-INF/ outputzip/
cp -avr system/lib/modules/ outputzip/system/lib/
cp ../bootimg_processing/outputbootimg/boot.img outputzip/boot.img
cp ../performance_control_app/PerformanceControl-2.1.8.apk outputzip/system/app/PerformanceControl-2.1.8.apk

echo ""
echo ""
echo "Moving old zip file..."
echo ""
echo ""
mkdir old_builds_zip
mv outputzip/*.zip old_builds_zip/
mv outputzip/*.zip.md5 old_builds_zip/

echo ""
echo ""
echo "Packing files into zip..."
echo ""
echo ""
cd outputzip
zip -r $KERNEL_BUILD.zip *
echo ""
echo ""
echo "==========================================================="
echo ""
echo ""
#echo "[BUILD]: Creating sha1 & md5 sums...";
#md5sum "$KERNEL_BUILD".zip > "$KERNEL_BUILD".zip.md5
#sha1sum "$KERNEL_BUILD".zip > "$KERNEL_BUILD".zip.sha1

#uploading to ftp


#echo "[BUILD]: Uploading files to $HOST...";
# Uses the ftp command with the -inv switches.
# -i turns off interactive prompting
# -n Restrains FTP from attempting the auto-login feature
# -v enables verbose and progress
#ftp -inv $HOST << End-Of-Session
#user $USER $PASS
#cd /kernelaosp
#put "$KERNEL_BUILD".zip.md5
#put "$KERNEL_BUILD".zip
#put "$KERNEL_BUILD".zip.sha1
#bye
#End-Of-Session

# Cleaning
$blue
echo ""
echo ""
echo "Cleaning..."
echo ""
echo ""

rm -rf META-INF
rm -rf system
rm boot.img
cd ../../
rm -rf ../arch/arm/boot/boot.img-zImage
rm -rf bootimg_processing
rm -rf flashablezip/system
Make mrproper
echo ""
echo ""
echo "==========================================================="
echo ""
echo ""


# End of script
$red
echo ""
echo "*************END OF KERNEL COMPILATION SCRIPT**************"
echo ""
echo "*********************HAPPY FLASHING************************"
$normal
