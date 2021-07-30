#include <stdio.h>
#include <string.h>

int indeks;       // indeks pembacaan
int panjangkata;  // jumlah karakter pada kata yang sedang dibaca
char ckata[50];   // penyimpan (sementara) kata yang telah sedang dibaca


/*
 *  Prosedur-prosedur dan fungsi-fungsi dasar mesin kata
 **/
void STARTKATA(char pita[]);
void RESETKATA();
void INCKATA(char pita[]);
char* GETCKATA();
int GETPANJANGKATA();
int EOPKATA(char pita[]);



/*
 *  Prosedur-prosedur dan fungsi-fungsi tambahan mesin kata
 **/
void GETKATAUNIK(int*);
