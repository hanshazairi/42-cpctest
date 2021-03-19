#!/bin/bash
clear
ROOTDIR=~/desktop/42kl/piscine
echo -e "\033[36mSelect project to grade:\033[0m"
select PROJECT in $(ls -d $ROOTDIR/cpc/*/ | sed 's_/$__' | sed 's_.*/__'); do
	[[ -z $PROJECT ]] && { echo -e >&2 "\033[31mERROR:\033[0m Bad option"; exit 1; } || break
done
echo -e "\033[36mYou selected \033[33m$PROJECT\033[36m. Select exercise to grade:\033[0m"
select EXERCISE in $(ls -d $ROOTDIR/cpc/$PROJECT/*/ | sed 's_/$__' | sed 's_.*/__'); do
	[[ -z $EXERCISE ]] && { echo -e >&2 "\033[31mERROR:\033[0m Bad option"; exit 2; } || break
done
echo -e "\033[36mYou selected \033[33m$EXERCISE\033[36m.\033[0m"
TESTDIR=$ROOTDIR/cpcgrader/$PROJECT/$EXERCISE
WORKDIR=$ROOTDIR/cpc/$PROJECT/$EXERCISE
cp $TESTDIR/* $WORKDIR
gcc -Wall -Wextra -Werror $WORKDIR/*.c -o $WORKDIR/$EXERCISE
echo -e "\033[36mGrading \033[33m$PROJECT/$EXERCISE\033[36m..\033[0m"
[[ $PROJECT != cpc06 ]] && $WORKDIR/$EXERCISE > $WORKDIR/user_output || { ARGV="aBc Cab bcA aBc1"; $WORKDIR/$EXERCISE $ARGV > $WORKDIR/user_output; }
echo -en "\033[33m$PROJECT/$EXERCISE: \033[0m"
cmp -s $WORKDIR/test_output $WORKDIR/user_output && echo -e "\033[32mOK\033[0m" || echo -e "\033[31mKO\033[0m"
[[ ! -z $1 ]] && [[ $1 == keep ]] && echo -e "\033[36mKeeping test files in \033[33m$WORKDIR/\033[36m..\033[0m" || { rm $WORKDIR/$EXERCISE $WORKDIR/test_output $WORKDIR/user_output $WORKDIR/norminette_output; [[ $PROJECT != cpc06 ]] && rm $WORKDIR/main.c; }
