#include <stdio.h>
#include <string.h>



/*-------------MESON KARAKTER-------------------*/

int indeks;
char cc;

//prosedur functionnya
void start(char pita[]);
void inc(char pita[]);
void adv(char pita[]);
char getcc();
int eop();

/*------------------MESIN KATA-------------------------*/
int indeks; 	//indeks pembacaan
int panjangkata; //jumlah karakter pada kata yang sedang dibaca
char ckata[50]; //penyimpan (sementara) kata yang telah dibaca


//Prosedur2 dan fungsi2 dasar mesin kata


void STARTKATA(char pita[]); 
void RESETKATA();
void INCKATA(char pita[]);
char *GETCKATA();
int GETPANJANGKATA();
int EOPKATA(char pita[]);
void KataBanyak(char pita[],int number);

/*template janji*/

/*Saya [AMMAR ASHSHIDDIQI] mengerjakan evaluasi [UAS] dalam mata kuliah [ALGORITMA DAN PEMROGRAMAN 2]
 untuk keberkahanNya maka saya tidak melakukan kecurangan seperti yang telah dispesifikasikan. Aamiin.
*/