#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


int find_leap_year(int year)
{
	if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0)
		return 366;
	else
		return 365;
}
int main()
{
	int count = 0;
	for (int i = 2000; i < 2100; i++) {
		if (find_leap_year(i) == 366) {
			printf("%d ", i);
			count++;
			if (count % 10 == 0)
				printf("\n");
		}
	}
}


