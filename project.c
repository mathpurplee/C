#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

int main()
{
	int price = 0;
	int rate = 0;
	double discount = 0;

	printf("��ǰ�� ����? : ");
	scanf("%d", &price);
	printf("������? : ");
	scanf("%d", &rate);
	
	discount = (double)rate / 100; // �� ��ȯ 
	
	printf("���ΰ� : %.lf�� (%.lf�� ����)", price-(discount*price), discount*price);
	
}