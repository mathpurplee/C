#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
    unsigned int num;

    printf("16진수로 데이터를 입력하세요 : ");
    scanf("%x", &num);

    for (int i = 0; i <= 3; i++) {
        printf("byte %d : %02x\n", i, (num >> i * 8) & 0x000000FF);
    }

    return 0;
}