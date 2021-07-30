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
	int ang1, ang2, ang3, ang4;
	
	//Meminta input user
	scanf(" %d", ang1);
	scanf(" %d", ang2);
	scanf(" %d", ang3);
	scanf(" %d", ang4);
	
	//Membuat variabel pengganti Part 1
	int a=0;
	
	//Pembuatan syarat range angka
	if(((ang1 >=0) && (ang1 <= 100))){
		a=1;
	}
	if(((ang2 >=0) && (ang2 <= 100))){
		a=1;
	}
	if(((ang3 >=0) && (ang3 <= 100))){
		a=1;
	}
	if(((ang4 >=0) && (ang4 <= 100))){
		a=1;
	}
	
	// Pembuatan variabel pengganti part 2
	int ganjil=0, genap=0;
	
	//Pembuatan syarat ganjil genap
	if(ang1%2==0){
		genap=1;
	}else{
		ganjil=1;
	}
	if(ang2%2==0){
		genap=1;
	}else{
		ganjil=1;
	}
	if(ang3%2==0){
		genap=1;
	}else{
		ganjil=1;
	}
	if(ang4%2==0){
		genap=1;
	}else{
		ganjil=1;
	}
	
	//Memeriksa pemenuhan kevalidan
	if((a==1)&&(genap==1)||(ganjil==1)){
		printf("valid\n");
	}else{
		printf("tidak valid\n");
	}	
	return 0;
}