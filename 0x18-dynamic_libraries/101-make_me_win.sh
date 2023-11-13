#!/bin/bash
wget -P /tmp https://github.com/Mrelshimy/alx-low_level_programming/raw/main/0x18-dynamic_libraries/gigmlns.so
export LD_PRELOAD=/tmp/gigmlns.so
