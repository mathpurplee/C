#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	float x, y;    // ������ �Է� ���� ����
	float z = 0;  // ��� ����� ������ ����
	char op;    // �����ڸ� �Է� ���� ����

	printf("�� ���� ������ �Է��ϼ��� : ");
	scanf("%f %f", &x, &y);
	printf("�� ������ ����� �����ڸ� �Է��ϼ��� : ");
	scanf(" %c", &op);

	if (op == '+')
		z = x + y;
	else if (op == '-')
	{
		if (x >= y)  // �ᱣ���� ����� �ǵ��� if�� ��ø�ؼ� ���� ũ�� ��
			z = x - y;
		else if (x < y)
			z = y - x;
	}
	else if (op == '/')
		z = x / y;
	else if (op == '*')
		z = x * y;

	printf("���� x�� �ּ� = %d, data = %.f\n", &x, x);
	printf("���� y�� �ּ� = %d, data = %.f\n", &y, y);
	printf("���� z�� �ּ� = %d, data = %.2f\n", &z, z);
	printf("%.f %c %.f = %.2f\n", x, op, y, z);
}
