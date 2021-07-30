/* PERNYATAAN

Saya Ammar Ashshiddiqi (1600095) mengerjakan evaluasi jtmc16 dalam mata kuliah Algoritma dan Pemrograman I dengan mengharapkan wajah Allah 'Azza wa Jalla dan saya memohon kepada-Nya agar saya termasuk hamba-Nya yang senantiasa takut kepada-Nya

*/

/********************************************************************************************
* Judul program: Penentu jarak terpanjang dari 3 pasangan titik								*
* Tanggal pembuatan: 26 Dzulhijjah 1437 Hijriyyah											*
* Masalah:	Diberikan tiga buah pasang titik, sebuah titik terdiri dari dua buah integer,	*
*			integer itu merupakan nilai x dan y titik itu.									*
*			Tampilkan titik ke berapa yang memiliki jarak titik paling panjang  			*
********************************************************************************************/


#include <stdio.h>
#include <math.h>
int main () {
	//Judul: Menghitung jarak antar pasangan titik
	
	// Variabel masukan data
		//Pasangan titik ke-1
		int x1, y1;	//koordinat titik ke-1
		int x2, y2; //koordinat titik ke-2
		int p1; //jarak pasangan titik ke-1
		//Pasangan titik ke-2
		int x3, y3; //koordinat titik ke-3
		int x4, y4; //koordinat titik ke-4
		int p2; //jarak pasangan titik ke-2
		//Pasangan titik ke-3
		int x5, y5; //koordinat titik ke-5
		int x6, y6; //koordinat titik ke-6
		int p3; //jarak pasangan titik ke-3
	
	//Mendapatkan koordinat titik-titik dari pengguna
	scanf("%d %d %d %d %d %d %d %d %d %d %d %d",
	&x1, &y1, &x2, &y2, &x3, &y3, &x4, &y4, &x5, &y5, &x6, &y6);
	
	//Menghitung jarak antar pasangan titik
	p1 = sqrt(((x1 - x2) * (x1 - x2)) + ((y1 - y2) * (y1 - y2)));
	p2 = sqrt(((x3 - x4) * (x3 - x4)) + ((y3 - y4) * (y3 - y4)));
	p3 = sqrt(((x5 - x6) * (x5 - x6)) + ((y5 - y6) * (y5 - y6)));
	
	//Menampilkan pasangan titik ke berapa yang memiliki jarak terpanjang
	if ((p1 > p2) && (p1 > p3))
		printf("1\n");
	else if ((p2 > p1) && (p2 > p3))
		printf("2\n");
	else if ((p3 > p1) && (p3 > p1))
		printf("3\n");
	
	return 0;
}