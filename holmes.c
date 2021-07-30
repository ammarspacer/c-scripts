/*(Holmes16) Sandi Pola Detektif


Pembuat Soal: Asisten Pemrograman 7

Batas Waktu Eksekusi	5 Detik
Batas Memori	1 MB

Piyu Holmes adalah seorang detektif programmer pertama didunia. Ia sangat terkenal di ilkom UPI karena dia seringkali mampu mengalahkan konspirasi yang dibuat oleh musuhnya, Moni Moriarty.

Suatu hari Moni berulah lagi, dia mengancam akan membuat nilai TP7 alpro menjadi NOL dengan sebuah program. Piyu geram dengan ulah Moni sehingga berusaha untuk membajak komputer milik Moni. Tapi sayang yang didapat adalah sebuah akses ke program buatan Moni yang terkunci dan folder bernama kunci yang berisi jutaan file terenkripsi.

Piyu sangat kelelahan setelah membajak komputer Moni hingga tiba-tiba tak sadarkan diri, tapi untungnya ia sempat menuliskan secarik kertas yang berisi cara untuk memecahkan file-file tersebut, isi dari kertas itu adalah sebagai berikut.

=======================================
misal nama file adalah : akumonakumoriarty.aku
maka kuncinya adalah : nama file tanpa kata yang ada pada formatnya(hasilnya selalu ganjil), lalu buat kata tersebut menjadi sebuah pola, kunci untuk program itu adalah pola tersebut.

nama file sebelum dirubah : akumonakumoriarty
nama file setelah dirubah : monmoriarty -> ini selalu gajnil
pola kunci :
note : karakter - (dash) diganti dengan spasi
-----m
----onm
---oriar
--ty
-----r
----i-o
---a---m
--r-----n
-t-------o
y---------m
=======================================

karena file kunci ada jutaan, maka akan lebih mudah bila dibuat program. Bantulah Piyu Holmes untuk mengalahkan Moni Moriarty dengan membuat program untuk membuat kunci tersebut.

Format Masukkan :

string berisi nama file beserta formatnya.

Format Keluaran :

kunci berbentuk pola.
Contoh Masukan

akumonakumoriarty.aku


Contoh Keluaran

     m
    onm
   oriar
  ty
     r
    i o
   a   m
  r     n
 t       o
y         m
Contoh Masukan 2

kamukamuberangkat.kamu


Contoh Keluaran 2

    b
   era
  ngkat
    n
   g a
  k   r
 a     e
t       b
       



*/

/* Saya AMMAR ASHSHIDDIQI mengerjakan evaluasi TUGAS PRAKTIKUM 7 dalam mata kuliah ALGORITMA DAN PEMROGRAMAN 1 
untuk keberkahanNya maka saya tidak melakukan kecurangan seperti yang telah dispesifikasikan. Aamiin.*/

#include <stdio.h>
#include <string.h>

int main(){
	int i,j;//iterasi
	char file[50]; // string file moriarty
	int x; //letak titik
	
	scanf("%s", &file); //meminta masukan string
				//jumlah string
	for(i=0; i<strlen(file); i++){ //proses menentukan lokasi titik
		if(file[i] == '.'){//---->jika ada input titik dalam nama file moriarty
			x=i;
			//letak titik
		}
	}
	
	char extension[50]; //wadah untuk blakang titik
	
	int h = 0; // u/ iterasi extension
		 //|->isi array ekstension adalah isi array file setelah titik
	     //|		 //^	 //iterasi
	for(i=x+1;i<strlen(file);i++){ //pemisahan nama file dgn extension
		extension[h] = file[i]; //----> array extension = isi array di setelah titik
		h++; //iterasi extension
	}
	
	char file_extension[50]; //string u/ penghilang nama ekstensi di nama file
	
	
	int l = 0; //iterasi pembanding
	int mm = 0; //iterasi pembanding extension dgn nama file
	
	
	for(i=0; i<x ;i++){ //membandingkan nama file dengan extension (belakang titik)
		mm = 0;  //saat sebelum dibandingkan
		for(j=0;j<strlen(extension);j++){
			if(extension[j] == file[i+j]){	
				mm++; //iterasi pembanding extension dgn nama file
			}
		}
		if(strlen(extension) == mm){
			for(j=0;j<strlen(extension);j++){//melooping dengan jumlah ekstensi
				file[i+j] = ' '; //mengganti isi file yg sama dengan isi extension
			}
		}
		l++; //iterasi
	}
	
	char notfile[50];
	
	j=0; //untuk iterasi
	for(i=0; i<x ; i++){					//Proses menghilangkan '_'
		if(file[i] != ' '){
			notfile[j] = file[i];
			j++; //iterasi
		}
		if (i == x-1){
			notfile[j] =='\0'; 
		}
	}
	
	
	
	//B. Proses Membuat Segitiga Illuminati (All Seeing Eye)
	int baris;
	int q = 0; //variabel unntuk membuat segitiga
	int w = 1; //variabel unntuk membuat segitiga
	int a = 0; //variabel unntuk membuat segitiga
	int t = strlen(notfile) ;
	
	int illuminati = 0;
	
		//SYARAT AGAR KONTEN NOTFILE TERPRINT
			if(strlen(notfile) <= 1){ //Ujung Lancip Segitiga (Eye of Pharaoh)
				illuminati = 1;
			}else if((strlen(notfile)>=2) && (strlen(notfile)<= 4)){ //Baris Dua Segitiga
				illuminati = 2;
			}else if((strlen(notfile)>=5) && (strlen(notfile)<= 9)){ //Baris 3 Segitiga
				illuminati = 3;
			}else if((strlen(notfile)>=10) && (strlen(notfile)<= 16)){ //Baris 4 Segitiga
				illuminati = 4;
			}else if((strlen(notfile)>=17) && (strlen(notfile)<= 25)){ //Baris 5 Segitiga
				illuminati = 5;
			}
			
		//MEMBUAT SEGITIGA
		
						//jumlah baris
			for(i=0;i<illuminati+1;i++){
				for(j=0;j<(strlen(notfile)/2)-(i+1);j++){
					printf("_");
				}
				

				for (j=q; j<w; j++){            //Membuat segitiga
					if (j < strlen(notfile)){   
					printf("%c",notfile[j]);
					}
					q++;
					}
					w = (w+2) + q - (a*a);
					a++;
					printf("\n");
			}
			

		
	// C. Proses Membuat /\
	
	///////////////////////				
	///					///
	///	BWARRRRRRRRRRRR	///			//Moniarty WILL DIE
	///		  |			///
	///		/	\		///
	///		 | |		///
	///		  /\		///
	//////////////////////
	
	for(i=0; i<1; i++){
		for(j=0;j<(strlen(notfile)/2);j++){
			printf(" ");
		}
		printf("%c\n", notfile[strlen(notfile)/2]); //PUNCAK STRING HASIL PROSES
	}
	
	int U=1; //variabel untuk iterasi spasi bagian tengah
	
	for(i=0;i<(strlen(notfile))/2;i++){
		for(j=0;j<(strlen(notfile)/2)-(i+1);j++){
			printf(" ");
		}
		
		printf("%c", notfile[(strlen(notfile)/2)+1+i]); //Untuk print setengah string notnilai 1
		
		
		
			for(j=0;j<U;j++){
			printf(" ");      //Spasi di bagian tengah
			}
	
		
		
		
		
		printf("%c", notfile[(strlen(notfile)/2)-1-i]); //Untuk print setengah string notnilai 2
		
		printf("\n");
		
		U=U+2; //Iterasi untuk spasi bagian tengah
	}
	
	
	
	
	
	
	return 0;
}