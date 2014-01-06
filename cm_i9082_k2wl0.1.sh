# evolution Kernel Compiler
# k2wl Kernel Compiler
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
#KERNEL_BUILD="k2wl_Kernel_Jelleybean-`date '+%Y-%m-%d-%H-%M'`" 	
#KBUILD_BUILD_VERSION="0.5.1"
KERNEL_BUILD="K2wl-SGGRAND-cm-v0.9-`date '+%Y-%m-%d--%H-%M'`"
#KBUILD_BUILD_USER= "k2wl"
#KBUILD_BUILD_HOST= "k2wlSuperMachine"
#TOOLCHAIN=/home/android/4.6/arm-eabi-4.6/bin/arm-eabi
TOOLCHAIN=/home/android/4.7/bin/arm-eabi
#TOOLCHAIN=/home/android/SM4.8/bin/arm-eabi
#TOOLCHAIN=/home/android/sm4.7/bin/arm-eabi
#TOOLCHAIN=/home/android/linaro4.7/bin/arm-unknown-linux-gnueabi
#TOOLCHAIN=/home/android/linaro4.8/bin/arm-unknown-linux-gnueabi
$yellow
MODULES=./k2wl/system/lib/modules
$blue
echo " |========================================================================| "
echo " |*************************** k2wl KERNEL ********************************| "
echo " |========================================================================| "
$white
echo " |========================================================================| "
echo " |*************************evolution KERNEL*******************************| "
echo " |========================================================================| "
$cyan
echo " |========================================================================| "
echo " |~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ k2wl at Work ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~| "
echo " |========================================================================| "
$red
echo " |========================================================================| "
echo " |~~~~~~~~~~~~~~~~~~~~~~~~~~~~ DEVELOPER ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~| "
$cyan
echo " |%%%%%%%%%%%%%%%%%%%%%%%%%%%%%% myself %%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%| "
$red
echo " |=========================== XDA-DEVELOPERS =============================| "
echo " |========================= Github.com/k2wl ==============================| "
echo " |========================================================================| "
$yellow
$bold
echo " |========================================================================| "
echo " |======================== COMPILING evolution cm11 KERNEL ===============| "
echo " |========================================================================| "
$normal


#if [ -n VERSION ]; then
#echo "Release version is 0"
#echo "0" > .version
#else 
#echo "Release version is $VERSION" 
#echo $VERSION > .version
#rm VERSION
#fi

$cyan
echo "Cleaning"
$violet
make clean
cd out
rm kernel.zip
cd ../
cd output
rm boot.img
cd ../
rm -rf k2wl/bootimage/unpack
rm -rf k2wl/bootimage/output
rm -rf k2wl/bootimage/boot
rm -rf k2wl/bootimage/source_img
rm -rf k2wl/system/lib/modules
clear
$cyan
echo " Making config"
$violet
make VARIANT_DEFCONFIG=i9082_defconfig SELINUX_DEFCONFIG=selinux_defconfig
clear


$cyan
echo "Making the zImage-the real deal"
$violet
make -j16
clear
$cyan 
mkdir k2wl/bootimage/source_img
echo "Processing the Bootimage"
cp input_bootimage/boot.img k2wl/bootimage/source_img/boot.img
echo "Extraction of the Boot.img"
$violet

cd k2wl/bootimage
rm -rf unpack
rm -rf output
rm -rf boot
clear
mkdir unpack
mkdir output
mkdir boot
tools/unpackbootimg -i source_img/boot.img -o unpack
cd boot
gzip -dc ../unpack/boot.img-ramdisk.gz | cpio -i
cd ../../../
$cyan
echo "Copying output files"
$violet
mv arch/arm/boot/zImage boot.img-zImage
rm k2wl/bootimage/unpack/boot.img-zImage	
cp boot.img-zImage k2wl/bootimage/unpack	
rm boot.img-zImage

cd k2wl
mkdir system
cd system
mkdir lib
cd lib
mkdir modules
cd ../../../
find -name '*.ko' -exec cp -av {} $MODULES/ \;

clear

$cyan
echo "Stripping Modules"
$violet
cd $MODULES
for m in $(find . | grep .ko | grep './')
do echo $m
$TOOLCHAIN-strip --strip-unneeded $m
done
clear
cd ../../../

clear
$red
echo " Making boot.img"
cd bootimage
$violet
tools/mkbootfs boot | gzip > unpack/boot.img-ramdisk-new.gz
rm -rf ../../output/boot.img
tools/mkbootimg --kernel unpack/boot.img-zImage --ramdisk unpack/boot.img-ramdisk-new.gz -o ../../output/boot.img --base `cat unpack/boot.img-base`	
rm -rf unpack
rm -rf output
rm -rf boot
cd ../../
$green
echo "Making Flashable Zip"
rm -rf out
mkdir out
mkdir out/system
mkdir out/system/lib
cp -avr k2wl/flash/META-INF/ out/
cp -avr k2wl/system/lib/modules/ out/system/lib/
cp input_bootimage/VoiceSolution.ko out/system/lib/
cp output/boot.img out/boot.img
cd out
zip -r $KERNEL_BUILD.zip *
rm -rf META-INF
rm -rf system
rm boot.img
cd ../



$blue
echo "Cleaning"
$violet
make clean mrproper
rm -rf k2wl/bootimage/unpack
rm -rf k2wl/bootimage/output
rm -rf k2wl/bootimage/boot
rm -rf k2wl/bootimage/source_img
rm -rf output/boot.img
clear
$green
echo " |============================ F.I.N.I.S.H ! =============================|"
$red
echo " |==========================Flash it and Enjoy============================| "

$normal


