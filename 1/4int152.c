/*Diberikan masukan berupa 4 buah integer, periksa apakah ada sebuah bilangan yang merupakan kelipatan dari 2 buah bilangan lainnya. Jika ada maka tampilkan memenuhi, jika tidak ada maka tampilkan tidak memenuhi.

Format Masukan:

4 buah integer masukan.

Format Keluaran:

memenuhi atau tidak memenuhi

misalnya:

2 3 6 5

maka hasilnya:

memenuhi

karena 6 adalah kelipatan dari dua bilangan lainnya yaitu 2 dan 3.
Contoh Masukan

3 4 10 12


Contoh Keluaran

memenuhi

Contoh Masukan 2

5 6 7 8


Contoh Keluaran 2

tidak memenuhi

       
*/
#include <stdio.h>
int main(){
	//Menentukan variabel
	int b1, b2, b3, b4;
	//Memita user memasukkan input
	scanf("%d %d %d %d", &b1, &b2, &b3, &b4);
	//Pengecekan kondisi
	//a
	if(a%b==0){
		x++;
	}
	if(a%c==0){
		x++;
	}
	if(a%d==0){
		x++;
	}
	//b
	if(b%a==0){
		x++;
	}
	if(b%c==0){
		x++;
	}
	if(b%d==0){
		x++;
	}
	//c
	if(c%a==0){
		x++;
	}
	if(c%b==0){
		x++;
	}
	if(c%d==0){
		x++;
	}
	//output
	if(x>=2){
		printf("memenuhi\n");
	}else{
		printf("tidak memenuhi\n");
	}
	
	return 0;
}
