/*Diberikan empat buah integer (masukan user), periksa apakah ada dua buah angka genap dan dua buah angka ganjil yang ada di dalam 4 masukan itu. Jika memenuhi tampilkan memenuhi, jika tidak memenuhi tampilkan tidak memenuhi.
Format Masukan:

4 baris integer dengan jangkauan angka 1 sampai 100

Format Keluaran:

memenuhi atau tidak memenuhi

Contoh Masukan

1
2
3
4


Contoh Keluaran

memenuhi

Contoh Masukan 2

1
3
5
4


Contoh Keluaran 2

tidak memenuhi

*/







#include <stdio.h> 
int main(){
	//Menentukan variabel
	int a, b, c, d;
	
	//Meminta input user
	scanf("%d %d %d %d", &a, &b, &c, &d);
	
	//Variabel pengganti
	int genap=0, ganjil=0;
	
	//Pembuatan syarat ganjil genap
	if(a % 2 == 0){
		genap++;
	}else{
		ganjil++;
	}
	if(b % 2 == 0){
		genap++;
	}else{
		ganjil++;
	}
	if(c % 2 == 0){
		genap++;
	}else{
		ganjil++;
	}
	if(d % 2 == 0){
		genap++;
	}else{
		ganjil++;
	}
	
	//Memeriksa pemenuhan kevalidan
	if((genap++) || (ganjil++)){
		printf("memenuhi\n");
	}else{
		printf("tidak memenuhi\n");
	}	
	
	return 0;
}




/* Saya [AMMAR ASHSHIDDIQI] 
	mengerjakan evaluasi [Kompetisi Kuis 1 Alpro 1 2016] 
	dengan mata kuliah [ALGORITMA DAN PEMROGRAMAN 1] 
	untuk keberkahanNya maka saya tidak melakukan kecurangan seperti yang sudah dispesifikasikan.
	Aamin//
	*/