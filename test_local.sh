#!/bin/sh

[ $# == 2 ] || { echo 'ERROR: Script takes 2 parameters!'; exit 1; }

cp ~/desktop/42kl/piscine/cpctest/$1/$2/* $2/
gcc -Wall -Wextra -Werror $2/*.c -o $2/$2
./$2/$2 > $2/user_output
cmp -s $2/test_output $2/user_output && echo "$2: OK" || echo "$2: KO"
rm $2/$2 $2/main.c $2/test_output $2/user_output || { echo 'ERROR: Could not delete test files!'; exit 1; }
