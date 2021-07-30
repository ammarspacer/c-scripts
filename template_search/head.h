#include <stdio.h>
#include <string.h>

typedef struct{
	char nama[20];
	char nim[20];
	float nilai;
}mahasiswa;

void search_sequential(mahasiswa ilkom[],int n,char cari_nim[]);