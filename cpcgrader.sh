#!/bin/bash
clear
echo -e "\033[36mSelect project to grade:\033[0m"
select PROJECT in $(ls -d */ | sed 's_/$__' | sed 's_.*/__'); do
	[[ -z $PROJECT ]] && { echo -e >&2 "\033[31mERROR:\033[0m Bad option"; exit 1; } || break
done
echo -e "\033[36mYou selected \033[33m$PROJECT\033[36m. Select exercise to grade:\033[0m"
select EXERCISE in $(ls -d $PROJECT/*/ | sed 's_/$__' | sed 's_.*/__'); do
	[[ -z $EXERCISE ]] && { echo -e >&2 "\033[31mERROR:\033[0m Bad option"; exit 2; } || break
done
WORKDIR=$PROJECT/$EXERCISE
norminette -R CheckForbiddenSourceHeader $WORKDIR/*.c
curl "https://raw.githubusercontent.com/hanshazairi/42-cpcgrader/master/$WORKDIR/{main.c,test_output}" -o $WORKDIR/#1
gcc -Wall -Wextra -Werror $WORKDIR/*.c -o $WORKDIR/$EXERCISE
$WORKDIR/$EXERCISE > $WORKDIR/user_output
echo -e "\033[36mGrading \033[33m$WORKDIR\033[36m..\033[0m"
echo -en "\033[33m$WORKDIR: \033[0m"
cmp -s $WORKDIR/test_output $WORKDIR/user_output && echo -e "\033[32mOK\033[0m" || echo -e "\033[31mKO\033[0m"
rm $WORKDIR/$EXERCISE $WORKDIR/main.c $WORKDIR/test_output $WORKDIR/user_output
