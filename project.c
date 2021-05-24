#define _CRT_SECURE_NO_WARNINGS
#define SONG_SIZE 8
#define GENRE_NAME_SIZE 8
#include <stdio.h>
#include <string.h>

enum Genre {
	ballad, hiphop, soul, dance, pop
};
struct song {
	char title[20];
	char artist[16];
	enum Genre genre;
};
int main()
{
	char genre_name[GENRE_NAME_SIZE] = { 0 };
	struct song songs[SONG_SIZE] = {
		{"������", "������", ballad},
		{"I'm The One", "DJ Khaled", hiphop},
		{"Jealous", "DJ Khaled", hiphop},
		{"�ѿ������� ��", "San E", hiphop},
		{"���� ��", "�����ī��", soul},
		{"���", "GRAY", soul},
		{"���� ����(No One)", "������", dance},
		{"Sixteen", "Ellie Goulding", pop},
	};

	printf("%s %41s %29s", "����", "��Ƽ��Ʈ", "�帣");
	for (int i = 0; i < SONG_SIZE; i++) {
		switch (songs[i].genre) {
		case ballad:
			strcpy(genre_name, "ballad");
			break;
		case hiphop:
			strcpy(genre_name, "hiphop");
			break;
		case soul:
			strcpy(genre_name, "soul");
			break;
		case dance:
			strcpy(genre_name, "dance");
			break;
		case pop:
			strcpy(genre_name, "pop");
			break;
		}
		printf("\nsongs[%d]�� �ּ� = %8d\n", i, &songs[i]);
		printf("songs[%d].title�� �ּ� = %d      songs[%d].artist�� �ּ� = %d songs[%d].genre�� �ּ� = %d\n", i, &songs[i].title, i, &songs[i].artist, i, &songs[i].genre);
		printf("songs[%d].title = %-20s songs[%d].artist = %-15s songs[%d].genre = %d\n", i, songs[i].title, i, songs[i].artist, i, songs[i].genre);
		for (int i = 0; i < GENRE_NAME_SIZE; i++)
			printf("genre_name[%d]�� �ּ� = %d, data = %c\n", i, &genre_name[i], genre_name[i]);
	}
}