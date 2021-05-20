#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

struct content {
	char title[40];
	int price;
	double rate;
};

int main(void)
{
	struct content arr[] = {
		{"Avengers", 1000, 8.8}, {"Aquaman", 550, 7.1}, {"Shazam!", 7700, 7.4},
		{"X-Men", 3300, 8.0}, {"US", 8800, 7.1}, {"Inception", 2200, 8.7}
	};
	int size = sizeof(arr) / sizeof(arr[0]);
	printf("size = %d\n", size); // 6
	printf("sizeof(arr) = %d\n", sizeof(arr)); // 336
	printf("sizeof(arr[0]) = %d\n", sizeof(arr[0])); // 56

	int i;             // ã�� ����ü �迭 ������ �ε���
	char title[40];  // �˻��� ������ ������ ������ ����

	printf("����? ");
	gets(title);

	for (i = 0; i < size; i++) {
		if (strcmp(arr[i].title, title) == 0) 
			break;
	}
	if (i == size)
		printf("�ش� �������� ã�� �� �����ϴ�.");
	else
		printf("%s�� ���� = %d, ���� = %.1f\n", arr[i].title, arr[i].price, arr[i].rate);
}
