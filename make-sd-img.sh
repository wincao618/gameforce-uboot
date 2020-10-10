#!/bin/bash
#
#
make distclean
./make.sh odroidgo2


make distclean
./make.sh odroidgo2-spi


./build_recovery.sh
