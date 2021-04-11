#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int convert_binary(int x);
char hex[20];

int main()
{
    int input_hex;

    printf("정수? : ");
    scanf("%x", &input_hex);
    convert_binary(input_hex);

    return 0;
}

int convert_binary(int x)
{
    long ouptput_bin = _itoa(x, hex, 2);
    printf("16진수 %X : %s", x, ouptput_bin);
}
