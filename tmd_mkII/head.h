#include <stdio.h>
#include <string.h>
#include <time.h>
#include <stdlib.h>
/*Saya [AMMAR ASHSHIDDIQI] tidak melakukan kecurangan yang dispesifikasikan pada tugas
masa depan Alpro 2 pada saat mengerjakan Tugas Masa Depan Alpro 2. Jika
saya melakukan kecurangan maka Allah/Tuhan adalah saksi saya, dan saya
bersedia menerima hukumanNya. Aamiin.*/

//variabel tipe bentukan untuk kota
typedef struct{
	int x;
	int y;
	char kota[50];
}tkota;

tkota datakota[499]; //pemanggil tipe bentukan kota
int nkota; //var jumlah kota


typedef struct{ //variabel tipe bentukan untuk kota
	int nomorJalur;
	char kota1[50];
	char kota2[50];
}tjalur;

tjalur datajalur[499]; //pemanggil tipe bentukan kota
int njalur; //var jumlah jalur

int p,l; //var p & l persegi panjang
char pp[500][500]; //var wadah


void readfiletkota(); //pemanggil prosedur read file kota
void readfiletjalur(); //pemanggil prosedur read file kota
void kotak() ; //pemanggil prosedur read file kota
void updateDatakota(); //pemanggil prosedur read file kota
void updateDatajalur();
void deleteDatakota(char kota[50]); //pemanggil prosedur read file kota
void deletefiletjalur(int nomorJalur,char kota1[],char kota2[]); //pemanggil prosedur read file kota
void fillkotak(); //pemanggil prosedur read file kota
void animasi(int nomorJalur); //pemanggil prosedur read file kota
void inserdatakota(tkota kota); //pemanggil prosedur read file kota
void inserdatajalur(tjalur jalur); //pemanggil prosedur read file kota
void wait(float x); //memanggil prosedur tunggu
int findDatajalur(int nomorJalur,char kota1[50],char kota2[50]);
int findDatakota(int x,int y);

