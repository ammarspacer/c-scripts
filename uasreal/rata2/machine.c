#include "head.h"
int i,j; //variabel global
int rat2(int n1, int n2,int jumlahelemen1,int jumlahelemen2){ //function menghitung rata2 
	int jumlahelemen; //variabel hasil penjumlahan seluruh elemen
	int jumlahbanyak; //variabel menghitung jumlah banyak elemen
	
	
	
	jumlahelemen = jumlahelemen1 + jumlahelemen2; //penjumlahan seluruh elemen
	jumlahbanyak = n1 + n2; //menghitung jumlah banyak elemen
	
	return jumlahelemen/jumlahbanyak; //return rata2
}