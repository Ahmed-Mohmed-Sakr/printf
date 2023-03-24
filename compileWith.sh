#!/bin/bash
gcc -Wall -pedantic -Werror -Wextra -std=gnu89 "$1" "$2" -o `echo "$2" |cut -d . -f1`.o
