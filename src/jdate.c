/**
*
* @Name : jdate.c
* @Version : 1.0
* @Programmer : Max
* @Date : 2020-04-04
* @Released under : https://github.com/BaseMax/jdate/blob/master/LICENSE
* @Repository : https://github.com/BaseMax/jdate
* @Related: https://github.com/BaseMax/ConvertCalendar
* 			https://github.com/BaseMax/JavaJalaliCalendar
*
**/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void check(int year, int month, int day) {
}

int main(int argc, char** argv) {
	if(argc > 3) {
		check(atoi(argv[1]), atoi(argv[2]), atoi(argv[3]));
	}
	else if(argc == 2 && strcmp(argv[1], "--auto") == 0) {
		check(atoi(execute("date '+\%Y'")), atoi(execute("date '+\%m'")), atoi(execute("date '+\%d'")));
	}
	return 0;
}
