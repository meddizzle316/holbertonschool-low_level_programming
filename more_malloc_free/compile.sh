#!/usr/bin/env bash
input="$1"
output="${1%.c}.o"
gcc -Wall -pedantic -Werror -Wextra -std=gnu89 "$input" -o "$output"
