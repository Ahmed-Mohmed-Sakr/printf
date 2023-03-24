#!/bin/bash
gcc -Wall -pedantic -Werror -Wextra -std=gnu89 "$1" -o `echo "$1" |cut -d . -f1`.o
