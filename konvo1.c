/*Pembuat Soal: Rosa A. S.

Batas Waktu Eksekusi	5 Detik
Batas Memori	1 MB

Diberikan 6 buah masukan berupa karakter, periksa apakah 6 karakter itu merupakan kombinasi per dua huruf konsonan dan huruf vokal atau sebaliknya.


Format Masukan:

6 buah masukan berupa karakter

Format Keluaran:

kata-kata kombinasi valid atau kombinasi tidak valid

Contoh Masukan

a
b
a
c
a
f


Contoh Keluaran

kombinasi valid*/

#include <stdio.h>
int main(){
		// menentukan variabel 6 input
	char x1;
	char x2;
	char x3;
	char x4;
	char x5;
	char x6;
	
	//Meminta user memasukkan variabel
	scanf(" %c", &x1);
	scanf(" %c", &x2);
	scanf(" %c", &x3);
	scanf(" %c", &x4);
	scanf(" %c", &x5);
	scanf(" %c", &x6);
	
	//menentukan jumlah input
	int aa=0, bb=0, cc=0, dd=0, ee=0, ff=0;
	
	
	//input pertama1
	if((x1 == 'a') || (x1 == 'i') || (x1 == 'u') || (x1 == 'e') || (x1 == 'o') ) {
		aa = 1;
	}
	
	//input kedua 1
	if((x2 != 'a') && (x2 != 'i') && (x2 != 'u') && (x2 != 'e') && (x2 != 'o')){
		bb = 1;
	}
	
	//input ketiga1
	if((x3 == 'a') || (x3 == 'i') || (x3 == 'u') || (x3 == 'e') || (x3 == 'o')){
		cc = 1;
	}
	
	//input keempat1
	if((x4 != 'a') && (x4 != 'i') && (x4 != 'u') && (x4 != 'e') && (x4 != 'o')){
		dd = 1;
	}
	
	//input kelima1
	if((x5 == 'a') || (x5 == 'i') || (x5 == 'u') || (x5 == 'e') || (x5 == 'o')){
		ee = 1;
	}
	
	// input keenam1 
	if((x6 != 'a') && (x6 != 'i') && (x6 != 'u') && (x6 != 'e') && (x6 != 'o')){
		ff = 1;
	}
	
	
	
	// memeriksa kevalidan
	if((aa == 1) && (bb == 1) && (cc == 1) && (dd == 1) && (ee == 1) && (ff == 1)){
		printf("kombinasi valid\n");
	}else if((aa == 0) && (bb == 0) && (cc == 0) && (dd == 0) && (ee == 0) && (ff == 0)){
		printf("kombinasi valid\n");
	}else{
		printf("kombinasi tidak valid\n");
	}
	return 0;
	
	
	
	
	
	
	
}