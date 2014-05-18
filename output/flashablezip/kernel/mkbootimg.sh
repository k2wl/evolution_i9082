#!/sbin/sh
echo \#!/sbin/sh > /tmp/createnewboot.sh
echo /tmp/mkbootimg --kernel /tmp/zImage --ramdisk /tmp/boot.img-ramdisk.gz --cmdline \"$(cat /tmp/boot.img-cmdline)\" --base $(cat /tmp/boot.img-base) --pagesize 4096 --output /tmp/newboot.img >> /tmp/createnewboot.sh
chmod 777 /tmp/createnewboot.sh
sh /tmp/createnewboot.sh
return $?
