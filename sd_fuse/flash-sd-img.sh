#!/bin/sh


sudo dd if=./sdcard_recovery.img of=/dev/sdd conv=fsync;sync

echo "dd over"

sudo eject /dev/sdd

echo Finished
