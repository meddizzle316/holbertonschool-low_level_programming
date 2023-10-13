#!/usr/bin/env bash
gcc -Wall -pedantic -Werror -Wextra -std=gnu89 "$1" -o "${1%.c}.o"
./"${1%.c}.o"
mv "${1%.c}.o" backups/
git add .
git commit -m "$2"
git push
