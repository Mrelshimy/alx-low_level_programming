#!/bin/bash
wget -P /tmp https://github.com/Mrelshimy/alx-low_level_programming/raw/master/0x18-dynamic_libraries/gigmln.so
export LD_PRELOAD=/tmp/gigmln.so
