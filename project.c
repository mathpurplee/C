#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int find_prime_num(int num) {
	int j;
	for (j = 2; j <= num; j++)
		if (num % j == 0)
			break;
	if (num == j)
		return num;
	else
		return 0;
}

int main() {
	int interger = 0, count = 0;
	printf("1~N 사이의 소수를 구합니다. N은? : ");
	scanf("%d", &interger);
	for (int i = 2; i <= interger; i++) {
		if (find_prime_num(i)) {
			printf("%2d ", i);
			count++;
			if (count % 10 == 0)
				printf("\n");
		}
	}
	return 0;
}


