#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main()
{
	char FileName[20] = "";
	char FileExtension[5] = "";
	char File[30] = "";

	for (int i = 0; i < 20; i++)
		printf("FileName[%2d]狼 林家 = %d, data = %c\n", i, &FileName[i], FileName[i]);
	printf("\n");
	for (int i = 0; i < 5; i++)
		printf("FileExtension[%d]狼 林家 = %d, data = %c\n", i, &FileExtension[i], FileExtension[i]);
	printf("\n");
	for (int i = 0; i < 20; i++)
		printf("File[%2d]狼 林家 = %d, data = %c\n", i, &File[i], File[i]);
	printf("\n");

	printf("颇老疙? ");
	gets(FileName);
	printf("犬厘磊? ");
	gets(FileExtension);

	strcpy(File, FileName);
	strcat(File, ".");
	strcat(File, FileExtension);

	printf("傈眉 颇老疙 : %s\n", File);

	for (int i = 0; i < 20; i++)
		printf("FileName[%2d]狼 林家 = %d, data = %c\n", i, &FileName[i], FileName[i]);
	printf("\n");
	for (int i = 0; i < 5; i++)
		printf("FileExtension[%d]狼 林家 = %d, data = %c\n", i, &FileExtension[i], FileExtension[i]);
	printf("\n");
	for (int i = 0; i < 20; i++)
		printf("File[%2d]狼 林家 = %d, data = %c\n", i, &File[i], File[i]);
	printf("\n");
}
