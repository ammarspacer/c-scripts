/* Saya Ammar Ash mengerjakan evaluasi UTS dalam mata kuliah Algoritma & 
Pemrograman I untuk keberkahanNya maka saya tidak melakukan kecurangan seperti yang telah dispesifikasikan. 
Aamiin. */

/*	
(fpb16) For Pola Bintang Ikan Kumis


Pembuat Soal: Rosa A. S.

Batas Waktu Eksekusi	5 Detik
Batas Memori	1 MB



Kompetensi yang dievaluasi: kemampuan kemampuan menggunakan for untuk membuat tampilan gambar.
- jangan lupa ketik janji setia pada kejujuran
- setiap suasana tidak kondusif akan mendapat teguran, dan setiap teguran ketiga akan dikenakan pemotongan waktu 10 menit bagi semua peserta evaluasi.
*/


																			/*Untuk masukan 4

																			****   ************    
																			 ****  *******  ****     
																			  **** ******    ****    
																			   *********      ********
																			   *********      ********
																			  **** ******    ****
																			 ****  *******  ****
																			****   ************

																			*/

																						/*Untuk masukan n=3
																						***  *********
																						 *** *****  ***
																						  *******    ******
																						  *******    ******
																						 *** *****  ***
																						***  *********
																						*/

/*Mission Start*/
#include <stdio.h>

int main(){
	//menentukan variabel
	int baris;
	int kolom;
	int n;
	//meminta masukan user
	
	
	scanf("%d", &n);
	//bikin ikan
	if(n >= 1){
		for(baris=1;baris<=n;baris++){ 
			for(kolom=1;kolom<=(baris-1);kolom++){
				printf("_"); 
			}
			for(kolom=1;kolom<=(n-baris);kolom++){
				printf("*");//ekor
			}
			for(kolom=0;kolom<=(baris-1);kolom++){
				printf("*");
			}
			for(kolom=1;kolom<=(n-baris);kolom++){
				printf("_");
			}
			for(kolom=1;kolom<=n;kolom++){
				printf("*");//set badan 1
			}
			for(kolom=1;kolom<=(n-baris);kolom++){
				printf("*");//set badan 2
			}
			for(kolom=1;kolom<=(baris-1);kolom++){
				printf("_");
			}
			for(kolom=1;kolom<=(baris-1);kolom++){
				printf("_");
			}
			for(kolom=1;kolom<=(n-baris);kolom++){
				printf("*"); //setkepala1
			}
			for(kolom=3;kolom<=(n+1);kolom++){
				printf("*");// set kepala2
			}
			
			
			
			printf("\n");
		}
	}

	
	
	
	
	
	return 0;
}


/*50% completed



