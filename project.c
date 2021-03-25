#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

int main()
{
	int price = 0;
	int rate = 0;
	double discount = 0;

	printf("제품의 가격? : ");
	scanf("%d", &price);
	printf("할인율? : ");
	scanf("%d", &rate);
	
	discount = (double)rate / 100; // 형 변환 
	
	printf("할인가 : %.lf원 (%.lf원 할인)", price-(discount*price), discount*price);
	
}