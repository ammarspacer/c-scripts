#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>

int indeks; 	//indeks pembacaan
int panjangkata; //jumlah karakter pada kata yang sedang dibaca
char ckata[50]; //penyimpan (sementara) kata yang telah dibaca

void STARTKATA(char pita[]); //header pemanggil penyala mesin kata
char* GETCKATA(); /*Mendapatkan kata yang telah sedang dibacanya*/
int EOPKATA(char pita[]);  /*Sinyal tanda selesai pembacaan*/
void INCKATA(char pita[]); /*maju 1 kata*/
//void quickSort(int l, int r, int n, char pita[]); //prosedur quick sort
void count(char pita[]); //menghitung jumlah vokal dan konsonan
int GETPANJANGKATA(); /*Mendapatkan jumlah karakter pada kata yang telah,sedang dibaca*/



/*Saya [AMMAR ASHSHIDDIQI] mengerjakan evaluasi [KOMPETENSI REMEDIAL ALPRO 2] dalam mata kuliah [ALGORITMA DAN PEMROGRAMAN 2]
 untuk keberkahanNya maka saya tidak melakukan kecurangan seperti yang telah dispesifikasikan. Aamiin.*/