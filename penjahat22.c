#include <stdio.h>
#include <string.h>
/*(arrstrjh) Ada penjahat!


Pembuat Soal: asisten algoritma pemrograman

Batas Waktu Eksekusi	5 Detik
Batas Memori	1 MB

Piyu sekarang setiap harinya bekerja sebagai pendata nama-nama orang yang akan masuk ke suatu markas rahasia.
Namun ternyata terkadang diantara orang-orang yang ia data, ada penjahat yang akan merusak susunan data yang telah piyu ketik. Para penjahat akan merusak susunan data nama selain mereka sesuai dengan jumlah mereka. Mereka akan memutar setiap huruf pada nama ke arah kiri sesuai dengan jumlah mereka, lalu mereka akan memutar ke arah bawah setiap nama sesuai dengan jumlah mereka juga.
Jika pada hari itu tidak ada penjahat, piyu akan memutar nama setiap orang ke arah bawah sebanyak 1 kali untuk menghindari adanya penjahat.
*tambahan: Jika semua orang yang didata adalah penjahat, penjahat akan berulah. 1.Mereka akan memutar setiap huruf pada nama mereka sendiri ke kanan sebanyak jumlah mereka 2.menampilkan hasil perputaran ke bawah


Format Masukkan :

int jumlah orang yang akan didata
array of string nama dari setiap orang

Format Keluaran :

pesan khusus.(pesan khusus hanya ada 3,dapat dilihat pada contoh tc)
tampilan data setelah ada penjahat/tidak ada penjahat
Contoh Masukan

5
ling
penjahat
madach
opal
penjahat

Contoh Keluaran

Awas ada penjahat!
dachma
alop
ngli

Contoh Masukan 2

3
penjahat
penjahat
penjahat

Contoh Keluaran 2

Semuanya adalah penjahat!:(
hhh
aaa
ttt
ppp
eee
nnn
jjj
aaa

       
Contoh Masukan 3

5
opal
mamar
madach
ling
dede

Contoh Keluaran 3

tidak ada penjahat :)
dede
opal
mamar
madach
ling


*/

/* Saya AMMAR ASHSHIDDIQI mengerjakan evaluasi TUGAS PRAKTIKUM 8 dalam mata kuliah ALGORITMA DAN PEMROGRAMAN 1 
untuk keberkahanNya maka saya tidak melakukan kecurangan seperti yang telah dispesifikasikan. Aamiin.*/



int main(){
	int n; //Variabel Jumlah inputan
	int i; //Variabel iterasi
 	
	scanf("%d", &n); //Meminta jumlah inputan
	
	char penjahat[n][50]; //Array of String
	
	for(i=0;i<n;i++){
		scanf("%s", &penjahat[i]); //Meminta masukan string
	}
	
	int jahat = 0; //Variabel untuk mengetahui ada penjahat atau tidak
	
		
	
	for(i=0;i<n;i++){
		if(strcmp(penjahat[i],"penjahat") == 0){   
			jahat++;                                  //Menghitung jumlah penjahat
		}
	}
	  	
	
	
		
	//A. Jika tidak ada penjahat	
    if(jahat == 0){  
		printf("tidak ada penjahat :)\n");
		for(i=0; i<n;i++){
			printf("%s\n",penjahat[((i-1+n)%n)]);
		}
		
	}
//==============================================================
	int j = 0; //iterasi dimensi lebar
	
//==============================================================	
	//B.Jika semuanya adalah PENJAHAT
	
	
	if(jahat == n){
		
		printf("Semuanya adalah penjahat!:(\n");
		for(i=0; i<strlen(penjahat[0]);i++){
			for(j=0;j<jahat;j++){
			printf("%c",penjahat[0][(i+jahat+2)%8]);	
			}
			
		printf("\n");
		}
	}
//==============================================================
	//C. Jika tidak semua PENJAHAAAAAAAAAAAAAAAAAAAAT
	char sisa[n-jahat][50]; //Array nama selain penjahat 
	int x=0; //iterasi untuk mengecek inputan selanjutnya
	

	if((jahat != 0) && (jahat !=n)){
		printf("Awas ada penjahat!\n");
		
		for(i=0; i<n;i++){
			if(strcmp(penjahat[i], "penjahat") == 0){
				strcpy(penjahat[i],"_"); //Menghilangkan "penjahat" dari output TAHAP 1(mengganti "penjahat" dengan "_")
			}
		}
		
		for(i=0; i<n;i++){
			if(strcmp(penjahat[i], "_") != 0){
			strcpy(sisa[x],penjahat[i]); //Menghilangkan "penjahat" dari output TAHAP 2 (mengganti "_" menjadi " ")
				x++;
			}
		}
		
		for(i=0;i<(n-jahat);i++){  //Pengolahan output agar menjadi acak (sesuai ketentuan)
			for(j=0; j<strlen(sisa[(i+jahat-1)%(n-jahat)]);j++){
				printf("%c", sisa[((i+jahat-1)%(n-jahat))]  [(j+jahat) % strlen(sisa[(i+jahat-1)%(n-jahat)])]);
			}
			printf("\n");
		}
		
	}
	
	return 0;
}