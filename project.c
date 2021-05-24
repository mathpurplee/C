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
		{"밤편지", "아이유", ballad},
		{"I'm The One", "DJ Khaled", hiphop},
		{"Jealous", "DJ Khaled", hiphop},
		{"한여름밤의 꿀", "San E", hiphop},
		{"서울 밤", "어반자카파", soul},
		{"썸머", "GRAY", soul},
		{"누구 없소(No One)", "이하이", dance},
		{"Sixteen", "Ellie Goulding", pop},
	};

	printf("%s %41s %29s", "제목", "아티스트", "장르");
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
		printf("\nsongs[%d]의 주소 = %8d\n", i, &songs[i]);
		printf("songs[%d].title의 주소 = %d      songs[%d].artist의 주소 = %d songs[%d].genre의 주소 = %d\n", i, &songs[i].title, i, &songs[i].artist, i, &songs[i].genre);
		printf("songs[%d].title = %-20s songs[%d].artist = %-15s songs[%d].genre = %d\n", i, songs[i].title, i, songs[i].artist, i, songs[i].genre);
		for (int i = 0; i < GENRE_NAME_SIZE; i++)
			printf("genre_name[%d]의 주소 = %d, data = %c\n", i, &genre_name[i], genre_name[i]);
	}
}