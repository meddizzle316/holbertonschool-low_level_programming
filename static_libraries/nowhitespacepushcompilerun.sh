#!/usr/bin/env bash
sed --in-place 's/[[:space:]]\+$//' "$1"
gcc -Wall -pedantic -Werror -Wextra -std=gnu89 "$1"
./a.out
git add .
git commit -m "$2"
git push
