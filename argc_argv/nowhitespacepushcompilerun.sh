#!/usr/bin/env bash
sed --in-place 's/[[:space:]]\+$//' "$1"
gcc -Wall -pedantic -Werror -Wextra -std=gnu89 "$1" -o "${1%.c}.o"
./"${1%.c}.o"
git add .
git commit -m "$2"
git push
