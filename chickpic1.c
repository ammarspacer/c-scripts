/*  	
Mission Briefing:
(chickPi1) Little Chicken


Pembuat Soal: Asistem Pemrograman

Batas Waktu Eksekusi	5 Detik
Batas Memori	1 MB

Buatlah program yang menampilkan pola tertentu berdasarkan pada masukan user.

Jika masukannya 1, maka pola yang akan ditampilkan adalah pola telur ayam dan jika masukannya bukan 1, maka pola yang akan ditampilkan adalah pola anak ayam dengan ketebalan sesuai masukan

Format Masukan


n, 0 < n <=10, ketebalan pola.

Format Keluaran


pola telur ayam atau anak ayam

Contoh Masukan

3


Contoh Keluaran

     *************
    ***************
   *****************
   ***   ***********
   ***   ***********
   ***   ***********
  ****   ***********
 *****   ***********
******   ***********
    ******************
     ************** ***
      ************  ****
      *          *
     ***        ***
    *****      *****
Contoh Masukan 2
5



Contoh Keluaran 2

         *******************
        *********************
       ***********************
      *************************
     ***************************
     *****     *****************
     *****     *****************
     *****     *****************
     *****     *****************
     *****     *****************
    ******     *****************
   *******     *****************
  ********     *****************
 *********     *****************
**********     *****************
      ****************************
       ************************ ***
        **********************  ****
         ********************   *****
          ******************    ******
          *                *
         ***              ***
        *****            *****
       *******          *******
      *********        *********

       
Contoh Masukan 3

1


Contoh Keluaran 3

 *****
*******
* *****
* *****
*******
 *****

 
 
 
 
*/
/* Saya Ammar Ash mengerjakan evaluasi Tugas Praktikum 4 dalam mata kuliah Algoritma & 
Pemrograman I untuk keberkahanNya maka saya tidak melakukan kecurangan seperti yang telah dispesifikasikan. 
Aamiin. */

//Mission Attempt

#include <stdio.h>
int main(){
	//Variabel input
	int baris,kolom,n;
	
	//Meminta masukkan user
	scanf("%d", &n);
	      
	//Gambar ayam jika n >= 2
	if(n >= 2){
		for(baris=1;baris<=n;baris++){ //-------------------------->Baris 109 -123 u/ kepala bagian trapesium
			for(kolom=1;kolom<=((n*2)-baris);kolom++){      
					printf(" ");
			}
			for(kolom=1;kolom<=baris;kolom++){
				printf("*");
			}
			for(kolom=1;kolom<=n;kolom++){
				printf("*");
			}
			for(kolom=1;kolom<=n;kolom++){
				printf("*");
			}
			for(kolom=1;kolom<=n;kolom++){
				printf("*");
			}
			for(kolom=1;kolom<=2;kolom++){
				printf("*");
			}
			for(kolom=1;kolom<=baris;kolom++){
				printf("*");
			}
			printf("\n");
		}
	//Depan,mata dan belakang pt 1
		for(baris=1;baris<=n;baris++){
			for(kolom=1;kolom<=n;kolom++){
				printf(" ");
			}
			for(kolom=1;kolom<=n;kolom++){
				printf("*");
			}
			for(kolom=1;kolom<=n;kolom++){
				printf(" ");
			}
			for(kolom=1;kolom<=n;kolom++){
				printf("*");
			}
			for(kolom=1;kolom<=n;kolom++){
				printf("*");
			}
			for(kolom=1;kolom<=n;kolom++){
				printf("*");
			}
			for(kolom=1;kolom<=2;kolom++){
				printf("*");
			}
			printf("\n");
		}	
	//Depan,mata belakang pt 2 +paruh	
		for(baris=1;baris<=n;baris++){
			for(kolom=1;kolom<=(n-baris);kolom++){
				printf(" ");
			}
			for(kolom=1;kolom<=(n+baris);kolom++){
				printf("*");
			}
			for(kolom=1;kolom<=n;kolom++){
				printf(" ");
			}
			for(kolom=1;kolom<=n;kolom++){
				printf("*");
			}
			for(kolom=1;kolom<=n;kolom++){
				printf("*");
			}
			for(kolom=1;kolom<=n;kolom++){
				printf("*");
			}
			for(kolom=1;kolom<=2;kolom++){
				printf("*");
			}
			for(kolom=1;kolom<=(n+1);kolom++){
				printf(" ");
			}	
			printf("\n");
		}
	//Kepala bag. bawah + ekor	
		for(baris=1;baris<=n;baris++){
			for(kolom=1;kolom<=(n+baris);kolom++){
				printf(" ");
			}
			for(kolom=1;kolom<=(n-baris);kolom++){
				printf("*");
			}
			for(kolom=1;kolom<=n;kolom++){
				printf("*");
			}
			for(kolom=1;kolom<=n;kolom++){
				printf("*");
			}
			for(kolom=1;kolom<=n;kolom++){
				printf("*");
			}
			for(kolom=0;kolom<=1;kolom++){
				printf("*");
			}
			for(kolom=1;kolom<=(n-(baris-1));kolom++){
				printf("*");
			}
			for(kolom=1;kolom<=(baris-1);kolom++){
				printf(" ");
			}	
			for(kolom=1;kolom<=(baris+1);kolom++){
				printf("*");
			}	
			printf("\n");
		}
		//Bagian kaki
		for(baris=1;baris<=n;baris++){
			for(kolom=1;kolom<=(((n*2)+1)-baris);kolom++){
				printf(" ");
			}
			for(kolom=1;kolom<=baris;kolom++){
				printf("*");
			}
			for(kolom=1;kolom<=(baris-1);kolom++){
				printf("*");
			}
			for(kolom=1;kolom<((n+2)-baris);kolom++){
				printf(" ");
			}
			for(kolom=1;kolom<=baris;kolom++){
				printf(" ");
			}
			for(kolom=1;kolom<((n+2)-baris);kolom++){
				printf(" ");
			}
			for(kolom=1;kolom<((n+2)-baris);kolom++){
				printf(" ");
			}
			for(kolom=1;kolom<=baris;kolom++){
				printf("*");
			}
			for(kolom=1;kolom<=(baris-1);kolom++){
				printf("*");
			}
			printf("\n");
		}
		
		
	}
	//Jika n=1 maka akan terbentuk telur
	else if(n=1){
		for(baris=1;baris<=(n+1);baris++){ 
			for(kolom=1;kolom<=((2*n)-baris);kolom++){      
				printf(" ");								  
			}
			for(kolom=1;kolom<=(baris+n);kolom++){      
				printf("*");								  
			}
			for(kolom=1;kolom<=(baris+n+1);kolom++){      
				printf("*");								  
			}
			for(kolom=1;kolom<=((2*n)-baris);kolom++){      
				printf(" ");								  
			}
			printf("\n");
		}
		//Telur dengan mata
		for(baris=1;baris<=(n+1);baris++){ 
			for(kolom=1;kolom<=n;kolom++){      
				printf("*");								  
			}
			for(kolom=1;kolom<=n;kolom++){      
				printf(" ");								  
			}
			for(kolom=1;kolom<=(n+4);kolom++){      
				printf("*");								  
			}
			printf("\n");
		}
		//Bagian bawah telur
		for(baris=1;baris<=(n+1);baris++){ 
			for(kolom=1;kolom<=(baris-n);kolom++){      
				printf(" ");								  
			}
			for(kolom=1;kolom<=((n+4)-baris);kolom++){      
				printf("*");								  
			}
			for(kolom=1;kolom<=((n+3)-baris);kolom++){      
				printf("*");								  
			}
			for(kolom=1;kolom<=(baris-n);kolom++){      
				printf(" ");								  
			}
			printf("\n");
		}
	}
	return 0;
}


