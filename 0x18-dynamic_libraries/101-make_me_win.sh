@!/bin/bash
wget -P /tmp https://github.com/aymantayel/alx-low_level_programming/raw/master/0x18-dynamic_libraries/lib101.so
export LD_PRELOAD=/tmp/lib101.so
