#!/bin/bash

echo "Check git update list"
git pull

#######################################
#    android_kernel_pantech_ef47s     #
#######################################
clear
echo ""
echo ""
echo "--------------------------"
echo "    LucidOS Kernel ef47s"
echo "--------------------------"

FOLDER=../Build_LucidOS_ef47s
zImage="$FOLDER/arch/arm/boot/zImage"
DEFCONFIG=msm8960_ef47s_tp20_user_defconfig


if [ ! -d $FOLDER ]; then
	mkdir -p ../Build_LucidOS_ef47s
	chmod 755 $FOLDER
fi

if [ ! -f $FOLDER/.config ]; then
	echo "--------------------------"
	echo "     load defconfig"
	echo "--------------------------"
	echo ""
	make O=$FOLDER msm8960_ef47s_tp20_user_defconfig
fi


if [ "$LucidOS_version" = "1.0" ]; then
# Start - use make.sh
if [ "$option1" = "" ]; then
	make -j8 O=$FOLDER
else
	make -j8 O=$FOLDER $option1 $option2 $option3
fi
# ↑ : use './make.sh'
else
# ↓ : use './build.sh'
if [ "$1" = "" ]; then
	make -j8 O=$FOLDER
else
	make -j8 O=$FOLDER $1 $2 $3
fi
# Finish - use build.sh
fi

# Prima_wlan
if [ -f $FOLDER/drivers/staging/prima/wlan.ko ]; then
	./bin/strip --strip-unneeded "$FOLDER/drivers/staging/prima/wlan.ko"
	cp $FOLDER/net/wireless/cfg80211.ko .
	cp $FOLDER/drivers/staging/prima/wlan.ko prima_wlan.ko
fi

# Copy zImage
if [ -f $FOLDER/arch/arm/boot/zImage ]; then
    cp -f $FOLDER/arch/arm/boot/zImage ./
fi

if [ -f $zImage ]; then
	echo "--------------------------"
	echo "     Makeing Boot.img"
	echo "--------------------------"
	./bin/mkbootimg --cmdline "console=ttyHSL0,115200,n8 androidboot.hardware=qcom androidboot.carrier=SKT-KOR user_debug=31 msm_rtb.filter=0x3F ehci-hcd.park=3 maxcpus=2 loglevel=0" --base 0x80200000 --pagesize 2048 --kernel zImage --ramdisk ./bin/ramdisk.gz --ramdiskaddr 0x82400000 -o boot.img
fi


# LucidOS Out/kernel copy
if [ -f $zImage ]; then
	if [ -d ../../out/target/$device ]; then
		cp -f $zImage ../../out/target/$device/kernel
	fi
fi
# LucidOS Boot.img copy
if [ -d ../../out/target/$device ]; then
cp -f boot.img ../../out/target/$device/boot.img
fi

