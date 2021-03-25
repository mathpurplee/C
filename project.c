#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	float x, y;    // 정수를 입력 받을 변수
	float z = 0;  // 계산 결과를 저장할 변수
	char op;    // 연산자를 입력 받을 변수

	printf("두 개의 정수를 입력하세요 : ");
	scanf("%f %f", &x, &y);
	printf("두 정수를 계산할 연산자를 입력하세요 : ");
	scanf(" %c", &op);

	if (op == '+')
		z = x + y;
	else if (op == '-')
	{
		if (x >= y)  // 결괏값이 양수가 되도록 if를 중첩해서 정수 크기 비교
			z = x - y;
		else if (x < y)
			z = y - x;
	}
	else if (op == '/')
		z = x / y;
	else if (op == '*')
		z = x * y;

	printf("변수 x의 주소 = %d, data = %.f\n", &x, x);
	printf("변수 y의 주소 = %d, data = %.f\n", &y, y);
	printf("변수 z의 주소 = %d, data = %.2f\n", &z, z);
	printf("%.f %c %.f = %.2f\n", x, op, y, z);
}
