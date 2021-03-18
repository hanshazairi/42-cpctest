# 42 C Piscine C Grader

My attempt at a script to grade 42 C Piscine C Projects. May not be 100% accurate, may return false OK, use at your own discretion.

**WORK IN PROGRESS.**

## Usage

1. Download ```cpcgrader.sh``` to directory that contains your C Piscine C Projects.
2. Run script using ```bash cpcgrader.sh``` or ```./cpcgrader.sh```.
3. Follow script prompts.

## Example

```
$ ls -p
cpc00/    cpc03/    cpc06/    cpc09/    cpc12/
cpc01/    cpc04/    cpc07/    cpc10/    cpc13/
cpc02/    cpc05/    cpc08/    cpc11/    cpcgrader.sh
$ bash cpcgrader.sh
Select project to grade:
1) cpc00    3) cpc02    5) cpc04    7) cpc06     9) cpc08   11) cpc10   13) cpc12
2) cpc01    4) cpc03    6) cpc05    8) cpc07    10) cpc09   12) cpc11   14) cpc13
#? 1
You selected cpc00. Select exercise to grade:
1) ex00   3) ex02   5) ex04   7) ex06   9) ex08
2) ex01   4) ex03   6) ex05   8) ex07
#? 1
You selected ex00.
Downloading test files..

[1/2]: https://raw.githubusercontent.com/hanshazairi/42-cpcgrader/master/cpc00/ex00/main.c --> cpc00/ex00/main.c
  % Total    % Received % Xferd  Average Speed   Time    Time     Time  Current
                                 Dload  Upload   Total   Spent    Left  Speed
100   969  100   969    0     0   1818      0 --:--:-- --:--:-- --:--:--  1814

[2/2]: https://raw.githubusercontent.com/hanshazairi/42-cpcgrader/master/cpc00/ex00/test_output --> cpc00/ex00/test_output
100     1  100     1    0     0      2      0 --:--:-- --:--:-- --:--:--     2
Grading cpc00/ex00..
cpc00/ex00: OK, Norme: OK
```
