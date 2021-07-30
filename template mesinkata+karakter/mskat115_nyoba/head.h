#include <stdio.h>
#include <string.h>

int indeks; 	//indeks pembacaan
int panjangkata; //jumlah karakter pada kata yang sedang dibaca
char ckata[50]; //penyimpan (sementara) kata yang telah dibaca

/*
*	Prosedur2 dan fungsi2 dasar mesin kata
**/

void STARTKATA(char pita[]);
void RESETKATA();
void INCKATA(char pita[]);
char *GETCKATA();
int GETPANJANGKATA();
int EOPKATA(char pita[]);

/*
*	Prosedur2 dan fungsi2 tambahan mesin kata
**/
void GETKATAUNIK(int*);

