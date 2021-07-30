#include "head.h"

//														Saya [AMMAR ASHSHIDDIQI] Mengerjakan [UAS]	       										//
//                                     	dalam matakuliah [ALGORITMA DAN PEMROGRAMAN 1] untuk keberkahannya maka saya tidak 												//
//										   	   melakukan kecurangan seperti yang telah dispesifikan. Aamiin		

int i, j; //variabel global



int main(){
	int n1; //variabel jumlah array of integer 1
	
	scanf("%d", &n1); //meminta masukan jumlah array of integer 1
	
	int n1_isi[50]; //variabel isi dari array of integer 1
	for(i=0;i<n1;i++){
		scanf("%d", &n1_isi[i]); //meminta masukan isi dari array of integer 1
	}
	
	int n2; //variabel jumlah array of integer 2
	scanf("%d", &n2); //meminta masukan jumlah array of integer 2
	
	int n2_isi[50]; //variabel isi dari array of integer 2
	for(j=0;j<n2;j++){
		scanf("%d", &n2_isi[j]); //meminta masukan jumlah array of integer 2
	}
	
	int jumlahelemen1; //variabel menampung hasil penjumlahan  array of integer 1
	
	for(i=0;i<n1;i++){
		jumlahelemen1 = n1_isi[i] + n1_isi[i+1]; //menampung hasil penjumlahan  array of integer 1
		i++; //iterasi
	}
	
	int jumlahelemen2; //variabel menampung hasil penjumlahan  array of integer 2
	
	for(j=0;j<n1;j++){
		jumlahelemen2 = n1_isi[j] + n1_isi[j]; //menampung hasil penjumlahan  array of integer 2
		j++; //iterasi
	}
	
	rat2(n1,n2,jumlahelemen1,jumlahelemen2); //menghitung rata2
 	
	printf("%d\n", rat2); //memunculkan hasil operasi rata2
	
	
	return 0;
}


