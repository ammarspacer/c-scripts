/* PERNYATAAN

Saya Naufan Rusyda Faikar (1607645) mengerjakan evaluasi ggse16 dalam mata kuliah Algoritma dan Pemrograman I dengan mengharapkan wajah Allah 'Azza wa Jalla dan saya memohon kepada-Nya agar saya termasuk hamba-Nya yang senantiasa takut kepada-Nya

*/

/****************************************************************************************************************
* Judul program: Penentu keseimbangan data antara bil ganjil dan genap											*
* Tanggal pembuatan: 26 Dzulhijjah 1437 Hijriyyah																*
* Masalah:	Diberikan empat buah integer (masukan user),														*
*			periksa apakah ada dua buah angka genap dan dua buah angka ganjil yang ada di dalam 4 masukan itu.	*
*			Jika memenuhi tampilkan memenuhi, jika tidak memenuhi tampilkan tidak memenuhi. 					*
****************************************************************************************************************/

#include <stdio.h>
int main () {
	// Variabel masukan data
	int in1, in2, in3, in4; // Masukan data berupa bil bulat ke-1 sampai ke-4
	
	// Variabel pembantu
	int ganjil = 0; // Penghitung bil ganjil
	int genap = 0; // Penghitung bil genap
	
	// Mendapatkan data berupa 6 bil bulat dari pengguna
	scanf("%d %d %d %d", &in1, &in2, &in3, &in4);
	
	// Jika masukan ke-1 adl bil ganjil
	if (in1 % 2 != 0)
		ganjil++;
	// Jika masukan ke-1 adl bil genap
	else
		genap++;
	
	// Jika masukan ke-2 adl bil ganjil
	if (in2 % 2 != 0)
		ganjil++;
	// Jika masukan ke-2 adl bil genap
	else
		genap++;
		
	// Jika masukan ke-3 adl bil ganjil
	if (in3 % 2 != 0)
		ganjil++;
	// Jika masukan ke-3 adl bil genap
	else
		genap++;
	
	// Jika masukan ke-4 adl bil ganjil
	if (in4 % 2 != 0)
		ganjil++;
	// Jika masukan ke-4 adl bil genap
	else
		genap++;
	
	// Keluaran: menampilkan kelulusan masukan dari pengguna
	if ((ganjil == 2) && (genap == 2))
		printf("memenuhi\n");
	else
		printf("tidak memenuhi\n");
	
	return 0;
}