#include "head.h" //MEMANGGIL HEADER DARI "head.h"
#include <string.h> //MEMANGGIL HEADER STRING
/*
SAYA AMMAR ASHSHIDDIQI MENGERJAKAN EVALUASI TUGAS MASA DEPAN DALAM MATA
KULIAH ALGORITMA DAN PEMROGRAMAN 1 UNTUK KEBERKAHANNYA MAKA SAYA TIDAK MELAKUKAN
KECURANGAN SEPERTI YANG TELAH DISPESIFIKASIKAN. AAMIIN

*/

//PROSEDUR PROSES PENAMPILAN UNTUK BARIS PERTAMA
//WARNING
void baris1(int angk1,int angk2,char operasi[50], int ketebalan){ 
	int j; //VARIABEL ITERASI
	/*PROSES PEMISAHAN INPUT ANGKA PERTAMA*/
	int sat1 = 0; //WADAH UNTUK MENAMPUNG ANGKA RATUSAN BILANGAN PERTAMA
	int pul1 = 0; //WADAH UNTUK MENAMPUNG ANGKA PULUHAN BILANGAN PERTAMA
	int rat1 = 0; //WADAH UNTUK MENAMPUNG ANGKA SATUAN  BILANGAN PERTAMA
	
	if(angk1>=100 && angk1<1000){ //PROSES PEMISAHAN JIKA INPUTAN ANGKA PERTAMA MERUPAKAN RATUSAN
		rat1 = angk1/100; //PEMISAHAN RATUSAN DAN PENAMPUNGAN ANGKA RATUSAN DARI ANGKA PERTAMA
		pul1 = (angk1 - rat1 * 100) / 10; //PEMISAHAN PULUHAN DAN PENAMPUNGAN ANGKA PULUHAN DARI ANGKA PERTAMA
		sat1 = ( angk1 - rat1 * 100 - pul1 * 10); //PEMISAHAN SATUAN DAN PENAMPUNGAN ANGKA SATUAN DARI ANGKA PERTAMA
	}else if(angk1>=10 && angk1<100){ //PROSES PEMISAHAN JIKA INPUTAN ANGKA PERTAMA MERUPAKAN PULUHAN
		pul1 = angk1/10;//PEMISAHAN PULUHAN DAN PENAMPUNGAN ANGKA PULUHAN DARI ANGKA PERTAMA
		sat1 = angk1 - pul1*10;  //PEMISAHAN SATUAN DAN PENAMPUNGAN ANGKA SATUAN DARI ANGKA PERTAMA
	}else if(angk1>=0 && angk1<10){ //PROSES PEMISAHAN JIKA INPUTAN ANGKA PERTAMA MERUPAKAN SATUAN
		sat1 = angk1; //PEMISAHAN SATUAN DAN PENAMPUNGAN ANGKA SATUAN DARI ANGKA PERTAMA
	}
	
	if(angk1>=100 && angk1<1000){ //PROSES PENAMPILAN OUTPUT JIKA ANGKA PERTAMA MERUPAKAN RATUSAN
		if((rat1 == 2) || (rat1 == 3) || (rat1 == 5) ||(rat1 == 6) || (rat1 == 8) || (rat1 == 9)) {
		//PROSES JIKA RATUSAN MERUPAKAN ANGKA 2, 3, 5, 6, 8, 9 
				for(j=0;j<ketebalan;j++){
					printf(" ");
				}
				for(j=0;j<ketebalan;j++){
					printf("0");
				}
				for(j=0;j<ketebalan;j++){
					printf(" ");
				}
				for(j=0;j<1;j++){  //SPASI ANTAR NOMINAL ANGKA
					printf(" ");
				}
			
		}	
		else if(rat1 == 7){
		//PROSES JIKA RATUSAN MERUPAKAN ANGKA 7
				for(j=0;j<ketebalan;j++){
					printf("0");
				}
				for(j=0;j<ketebalan;j++){
					printf("0");
				}
				for(j=0;j<ketebalan;j++){
					printf(" ");
				}
				for(j=0;j<1;j++){
					printf(" ");
				}
			
			
		}else{
			//PROSES JIKA RATUSAN MERUPAKAN ANGKA SELAIN YANG DISEBUTKAN
				for(j=0;j<ketebalan;j++){
					printf(" ");
				}
				for(j=0;j<ketebalan;j++){
					printf(" ");
				}
				for(j=0;j<ketebalan;j++){
					printf(" ");
				}
				for(j=0;j<1;j++){
					printf(" "); //SPASI ANTAR NOMINAL ANGKA
				}
			
					
		}
		
		
	if((pul1 == 0) || (pul1 == 2) || (pul1 == 3) || (pul1 == 5) || (pul1 == 6) || (pul1 == 8) || (pul1 == 9)) {
			//PROSES JIKA PULUHAN MERUPAKAN ANGKA 2, 3, 5, 6, 8, 9 
				for(j=0;j<ketebalan;j++){
					printf(" ");
				}
				for(j=0;j<ketebalan;j++){
					printf("0");
				}
				for(j=0;j<ketebalan;j++){
					printf(" ");
				}
				for(j=0;j<1;j++){
					printf(" ");
				}
			
		}else if((pul1 == 1) || (pul1 == 4)){
			//PROSES JIKA PULUHAN MERUPAKAN ANGKA 1,4
				for(j=0;j<ketebalan;j++){
					printf(" ");
				}
				for(j=0;j<ketebalan;j++){
					printf(" ");
				}
				for(j=0;j<ketebalan;j++){
					printf(" ");
				}
				for(j=0;j<1;j++){
					printf(" ");
				}
			
		}else if(pul1 == 7){
			//PROSES JIKA PULUHAN MERUPAKAN ANGKA 7
				for(j=0;j<ketebalan;j++){
					printf("0");
				}
				for(j=0;j<ketebalan;j++){
					printf("0");
				}
				for(j=0;j<ketebalan;j++){
					printf(" ");
				}
				for(j=0;j<1;j++){
					printf(" ");
				}
			
		}
		
		
		if((sat1 == 0) || (sat1 == 2) || (sat1 == 3) || (sat1 == 5) || (sat1 == 6) || (sat1 == 8) || (sat1 == 9)) {
			//PROSES JIKA SATUAN MERUPAKAN ANGKA 0, 2, 3, 5, 6, 8, 9
				for(j=0;j<ketebalan;j++){
					printf(" ");
				}
				for(j=0;j<ketebalan;j++){
					printf("0");
				}
				for(j=0;j<ketebalan;j++){
					printf(" ");
				}
				for(j=0;j<ketebalan;j++){
					printf(" ");
				}
		}else if((sat1 == 1) || (sat1 == 4)){
			//PROSES JIKA SATUAN MERUPAKAN ANGKA 1, 4
				for(j=0;j<ketebalan;j++){
					printf(" ");
				}
				for(j=0;j<ketebalan;j++){
					printf(" ");
				}
				for(j=0;j<ketebalan;j++){
					printf(" ");
				}
				for(j=0;j<ketebalan;j++){
					printf(" ");
				}
		}else if(sat1 == 7){
			//PROSES JIKA SATUAN MERUPAKAN ANGKA 7
				for(j=0;j<ketebalan;j++){
					printf("0");
				}
				for(j=0;j<ketebalan;j++){
					printf("0");
				}
				for(j=0;j<ketebalan;j++){
					printf(" ");
				}
				for(j=0;j<ketebalan;j++){
					printf(" ");
				}
		}
		
	}
	
	
	if(angk1>=10 && angk1<100){ //PROSES PENAMPILAN OUTPUT JIKA ANGKA PERTAMA MERUPAKAN PULUHAN
		
		if((pul1 == 2) || (pul1 == 3) || (pul1 == 5) || (pul1 == 6) || (pul1 == 8) || (pul1 == 9)) {
			//PROSES JIKA PULUHAN MERUPAKAN ANGKA 2, 3, 5, 6, 8, 9
				for(j=0;j<ketebalan;j++){
					printf(" ");
				}
				for(j=0;j<ketebalan;j++){
					printf("0");
				}
				for(j=0;j<ketebalan;j++){
					printf(" ");
				}
				for(j=0;j<1;j++){
					printf(" ");
				}
			
		}else if((pul1 == 1) || (pul1 == 4)){
			//PROSES JIKA PULUHAN MERUPAKAN ANGKA 1,4
				for(j=0;j<ketebalan;j++){
					printf(" ");
				}
				for(j=0;j<ketebalan;j++){
					printf(" ");
				}
				for(j=0;j<ketebalan;j++){
					printf(" ");
				}
				for(j=0;j<1;j++){
					printf(" ");
				}
			
		}else if(pul1 == 7){
			//PROSES JIKA PULUHAN MERUPAKAN ANGKA 7
				for(j=0;j<ketebalan;j++){
					printf("0");
				}
				for(j=0;j<ketebalan;j++){
					printf("0");
				}
				for(j=0;j<ketebalan;j++){
					printf(" ");
				}
				for(j=0;j<1;j++){
					printf(" ");
				}
			
		}
		
		
		if((sat1 == 0) || (sat1 == 2) || (sat1 == 3) || (sat1 == 5) || (sat1 == 6) || (sat1 == 8) || (sat1 == 9)) {
			//PROSES JIKA SATUAN MERUPAKAN ANGKA 0, 2, 3, 5, 6, 8, 9
				for(j=0;j<ketebalan;j++){
					printf(" ");
				}
				for(j=0;j<ketebalan;j++){
					printf("0");
				}
				for(j=0;j<ketebalan;j++){
					printf(" ");
				}
				for(j=0;j<ketebalan;j++){
					printf(" ");
				}
				
		}else if((sat1 == 1) || (sat1 == 4)){
			//PROSES JIKA SATUAN MERUPAKAN ANGKA 1,4
				for(j=0;j<ketebalan;j++){
					printf(" ");
				}
				for(j=0;j<ketebalan;j++){
					printf(" ");
				}
				for(j=0;j<ketebalan;j++){
					printf(" ");
				}
				for(j=0;j<ketebalan;j++){
					printf(" ");
				}
		}else if(sat1 == 7){
			//PROSES JIKA SATUAN MERUPAKAN ANGKA 7
				for(j=0;j<ketebalan;j++){
					printf("0");
				}
				for(j=0;j<ketebalan;j++){
					printf("0");
				}
				for(j=0;j<ketebalan;j++){
					printf(" ");
				}
				for(j=0;j<ketebalan;j++){
					printf(" ");
				}
		}
		
	}
	
	if(angk1>=1 && angk1<10){ //PROSES PENAMPILAN OUTPUT JIKA ANGKA PERTAMA MERUPAKAN SATUAN
				
		
		if((sat1 == 0) || (sat1 == 2) || (sat1 == 3) || (sat1 == 5) || (sat1 == 6) || (sat1 == 8) || (sat1 == 9)) {
			//PROSES JIKA SATUAN MERUPAKAN ANGKA 0, 2, 3, 5, 6, 8, 9
				for(j=0;j<ketebalan;j++){
					printf(" ");
				}
				for(j=0;j<ketebalan;j++){
					printf("0");
				}
				for(j=0;j<ketebalan;j++){
					printf(" ");
				}
				for(j=0;j<ketebalan;j++){
					printf(" ");
				}
		}else if((sat1 == 1) || (sat1 == 4)){
			
				for(j=0;j<ketebalan;j++){
					printf(" ");
				}
				for(j=0;j<ketebalan;j++){
					printf(" ");
				}
				for(j=0;j<ketebalan;j++){
					printf(" ");
				}
				for(j=0;j<ketebalan;j++){
					printf(" ");
				}
		}else if(sat1 == 7){
			
				for(j=0;j<ketebalan;j++){
					printf("0");
				}
				for(j=0;j<ketebalan;j++){
					printf("0");
				}
				for(j=0;j<ketebalan;j++){
					printf(" ");
				}
				for(j=0;j<ketebalan;j++){
					printf(" ");
				}
		}
		
	}
	
	//PROSES PENAMPILAN OPERASI HITUNGAN
	if((strcmp(operasi,"tambah") == 0) || (strcmp(operasi,"kali") == 0)||(strcmp(operasi,"bagi") == 0)||(strcmp(operasi,"kurang") == 0)){
			for(j=0;j<ketebalan;j++){
				printf(" ");
			}
			for(j=0;j<ketebalan;j++){
				printf(" ");
			}
			for(j=0;j<ketebalan;j++){
				printf(" ");
			}
			for(j=0;j<ketebalan;j++){
				printf(" ");
			}

			
	}
	
	
	/*PROSES PEMISAHAN INPUT ANGKA KEDUA*/
	int sat2 = 0; //WADAH UNTUK MENAMPUNG ANGKA RATUSAN BILANGAN KEDUA
	int pul2 = 0; //WADAH UNTUK MENAMPUNG ANGKA PULUHAN BILANGAN KEDUA
	int rat2 = 0; //WADAH UNTUK MENAMPUNG ANGKA SATUAN  BILANGAN KEDUA
	
	if(angk2>=100 && angk2<1000){ //PROSES PEMISAHAN JIKA INPUTAN ANGKA KEDUA MERUPAKAN RATUSAN
		rat2 = angk2/100;//PEMISAHAN RATUSAN DAN PENAMPUNGAN ANGKA RATUSAN DARI ANGKA KEDUA
		pul2 = (angk2 - rat2 * 100) / 10; //PEMISAHAN PULUHAN DAN PENAMPUNGAN ANGKA PULUHAN DARI ANGKA KEDUA
		sat2 = ( angk2 - rat2 * 100 - pul2 * 10);//PEMISAHAN SATUAN DAN PENAMPUNGAN ANGKA SATUAN DARI ANGKA KEDUA
	}else if(angk2>=10 && angk2<100){//PROSES PEMISAHAN JIKA INPUTAN ANGKA KEDUA MERUPAKAN PULUHAN
		pul2 = angk2/10;//PEMISAHAN PULUHAN DAN PENAMPUNGAN ANGKA PULUHAN DARI ANGKA KEDUA
		sat2 = angk2 - pul1*10;//PEMISAHAN SATUAN DAN PENAMPUNGAN ANGKA SATUAN DARI ANGKA KEDUA
	}else if(angk2>=0 && angk2<10){//PROSES PEMISAHAN JIKA INPUTAN ANGKA PERTAMA MERUPAKAN SATUAN
		sat2 = angk2;//PEMISAHAN SATUAN DAN PENAMPUNGAN ANGKA SATUAN DARI ANGKA KEDUA
	}
	
	if(angk2>=100 && angk2<1000){//PROSES PENAMPILAN OUTPUT JIKA ANGKA KEDUA MERUPAKAN RATUSAN
		if((rat2 == 2) || (rat2 == 3) || (rat2 == 6) || (rat2 == 5) || (rat2 == 8) || (rat2 == 9)) {
		//PROSES JIKA RATUSAN MERUPAKAN ANGKA 2, 3, 5, 6, 8, 9 
				for(j=0;j<ketebalan;j++){
					printf(" ");
				}
				for(j=0;j<ketebalan;j++){
					printf("0");
				}
				for(j=0;j<ketebalan;j++){
					printf(" ");
				}
				for(j=0;j<1;j++){
					printf(" ");
				}
			
		}	
		else if(rat2 == 7){
		//PROSES JIKA RATUSAN MERUPAKAN ANGKA 7
				for(j=0;j<ketebalan;j++){
					printf("0");
				}
				for(j=0;j<ketebalan;j++){
					printf("0");
				}
				for(j=0;j<ketebalan;j++){
					printf(" ");
				}
				for(j=0;j<1;j++){
					printf(" ");
				}
			
			
		}else{
			//PROSES JIKA RATUSAN MERUPAKAN ANGKA SELAIN YANG DISEBUTKAN
				for(j=0;j<ketebalan;j++){
					printf(" ");
				}
				for(j=0;j<ketebalan;j++){
					printf(" ");
				}
				for(j=0;j<ketebalan;j++){
					printf(" ");
				}
				for(j=0;j<1;j++){
					printf(" ");
				}
			
					
		}
		
		
		if((pul2 == 0) || (pul2 == 2) || (pul2 == 3) || (pul2 == 5) || (pul2 == 6) || (pul2 == 8) || (pul2 == 9)) {
			//PROSES JIKA PULUHAN MERUPAKAN ANGKA 0,2, 3, 5, 6, 8, 9
				for(j=0;j<ketebalan;j++){
					printf(" ");
				}
				for(j=0;j<ketebalan;j++){
					printf("0");
				}
				for(j=0;j<ketebalan;j++){
					printf(" ");
				}
				for(j=0;j<1;j++){
					printf(" ");
				}
			
		}else if((pul2 == 1) || (pul2 == 4)){
			//PROSES JIKA PULUHAN MERUPAKAN ANGKA 1,4
				for(j=0;j<ketebalan;j++){
					printf(" ");
				}
				for(j=0;j<ketebalan;j++){
					printf(" ");
				}
				for(j=0;j<ketebalan;j++){
					printf(" ");
				}
				for(j=0;j<1;j++){
					printf(" ");
				}
			
		}else if(pul2 == 7){
			//PROSES JIKA PULUHAN MERUPAKAN ANGKA 7
				for(j=0;j<ketebalan;j++){
					printf("0");
				}
				for(j=0;j<ketebalan;j++){
					printf("0");
				}
				for(j=0;j<ketebalan;j++){
					printf(" ");
				}
				for(j=0;j<1;j++){
					printf(" ");
				}
			
		}
		
		
		if((sat2 == 0) || (sat2 == 2) || (sat2 == 3) || (sat2 == 5) || (sat2 == 6) || (sat2 == 8) || (sat2 == 9)) {
				//PROSES JIKA SATUAN MERUPAKAN ANGKA 0, 2, 3, 5, 6, 8, 9
				for(j=0;j<ketebalan;j++){
					printf(" ");
				}
				for(j=0;j<ketebalan;j++){
					printf("0");
				}
				for(j=0;j<ketebalan;j++){
					printf(" ");
				}
				for(j=0;j<ketebalan;j++){
					printf(" ");
				}
				for(j=0;j<ketebalan;j++){
					printf(" ");
				}
				for(j=0;j<ketebalan;j++){
					printf(" ");
				}
		}else if((sat2 == 1) || (sat2 == 4)){
			//PROSES JIKA SATUAN MERUPAKAN ANGKA 1,4
				for(j=0;j<ketebalan;j++){
					printf(" ");
				}
				for(j=0;j<ketebalan;j++){
					printf(" ");
				}
				for(j=0;j<ketebalan;j++){
					printf(" ");
				}
				for(j=0;j<ketebalan;j++){
					printf(" ");
				}
				for(j=0;j<ketebalan;j++){
					printf(" ");
				}
				for(j=0;j<ketebalan;j++){
					printf(" ");
				}
		}else if(sat2 == 7){
			//PROSES JIKA SATUAN MERUPAKAN ANGKA 7
				for(j=0;j<ketebalan;j++){
					printf("0");
				}
				for(j=0;j<ketebalan;j++){
					printf("0");
				}
				for(j=0;j<ketebalan;j++){
					printf(" ");
				}
				for(j=0;j<ketebalan;j++){
					printf(" ");
				}
				for(j=0;j<ketebalan;j++){
					printf(" ");
				}
				for(j=0;j<ketebalan;j++){
					printf(" ");
				}
		}	
		
	}
	
	
	if(angk2>=10 && angk2<100){ //PROSES PENAMPILAN OUTPUT JIKA ANGKA KEDUA 
		
		if((pul2 == 2) || (pul2 == 3) || (pul2 == 5) || (pul1 == 6) || (pul1 == 8) || (pul1 == 9)) {
			//PROSES JIKA PULUHAN MERUPAKAN ANGKA 2, 3, 5, 6, 8, 9
				for(j=0;j<ketebalan;j++){
					printf(" ");
				}
				for(j=0;j<ketebalan;j++){
					printf("0");
				}
				for(j=0;j<ketebalan;j++){
					printf(" ");
				}
				for(j=0;j<1;j++){
					printf(" ");
				}
			//PROSES JIKA PULUHAN MERUPAKAN ANGKA 1,4
		}else if((pul2== 1) || (pul2 == 4)){
			
				for(j=0;j<ketebalan;j++){
					printf(" ");
				}
				for(j=0;j<ketebalan;j++){
					printf(" ");
				}
				for(j=0;j<ketebalan;j++){
					printf(" ");
				}
				for(j=0;j<1;j++){
					printf(" ");
				}
			//PROSES JIKA PULUHAN MERUPAKAN ANGKA 7
		}else if(pul2 == 7){
			
				for(j=0;j<ketebalan;j++){
					printf("0");
				}
				for(j=0;j<ketebalan;j++){
					printf("0");
				}
				for(j=0;j<ketebalan;j++){
					printf(" ");
				}
				for(j=0;j<1;j++){
					printf(" ");
				}
			
		}
		
		
	if((sat2 == 0) || (sat2 == 2) || (sat2 == 3) || (sat2 == 5) || (sat2 == 6) || (sat2 == 8) || (sat2 == 9)) {
			//PROSES JIKA SATUAN MERUPAKAN ANGKA 0, 2, 3, 5, 6, 8, 9
				for(j=0;j<ketebalan;j++){
					printf(" ");
				}
				for(j=0;j<ketebalan;j++){
					printf("0");
				}
				for(j=0;j<ketebalan;j++){
					printf(" ");
				}
				for(j=0;j<ketebalan;j++){
					printf(" ");
				}
				for(j=0;j<ketebalan;j++){
					printf(" ");
				}
				for(j=0;j<ketebalan;j++){
					printf(" ");
				}
		}else if((sat2 == 1) || (sat2 == 4)){
			//PROSES JIKA SATUAN MERUPAKAN ANGKA 1,4
				for(j=0;j<ketebalan;j++){
					printf(" ");
				}
				for(j=0;j<ketebalan;j++){
					printf(" ");
				}
				for(j=0;j<ketebalan;j++){
					printf(" ");
				}
				for(j=0;j<ketebalan;j++){
					printf(" ");
				}
				for(j=0;j<ketebalan;j++){
					printf(" ");
				}
				for(j=0;j<ketebalan;j++){
					printf(" ");
				}
		}else if(sat2 == 7){
			//PROSES JIKA SATUAN MERUPAKAN ANGKA 7
				for(j=0;j<ketebalan;j++){
					printf("0");
				}
				for(j=0;j<ketebalan;j++){
					printf("0");
				}
				for(j=0;j<ketebalan;j++){
					printf(" ");
				}
				for(j=0;j<ketebalan;j++){
					printf(" ");
				}
				for(j=0;j<ketebalan;j++){
					printf(" ");
				}
				for(j=0;j<ketebalan;j++){
					printf(" ");
				}
		}
		
	}
	
	if(angk2>=1 && angk2<10){ //PROSES PENAMPILAN OUTPUT JIKA ANGKA KEDUA ADALAH SATUAN
				
		
		if((sat2 == 0) || (sat2 == 2) || (sat2 == 3) ||(sat2 == 5) || (sat2 == 6) || (sat2 == 8) || (sat2 == 9)) {
			//PROSES JIKA SATUAN MERUPAKAN ANGKA 0, 2, 3, 5, 6, 8, 9
				for(j=0;j<ketebalan;j++){
					printf(" ");
				}
				for(j=0;j<ketebalan;j++){
					printf("0");
				}
				for(j=0;j<ketebalan;j++){
					printf(" ");
				}
				for(j=0;j<ketebalan;j++){
					printf(" ");
				}
				for(j=0;j<ketebalan;j++){
					printf(" ");
				}
				for(j=0;j<ketebalan;j++){
					printf(" ");
				}
		}else if((sat2 == 1) || (sat2 == 4)){
			//PROSES JIKA SATUAN MERUPAKAN ANGKA 1,4
				for(j=0;j<ketebalan;j++){
					printf(" ");
				}
				for(j=0;j<ketebalan;j++){
					printf(" ");
				}
				for(j=0;j<ketebalan;j++){
					printf(" ");
				}
				for(j=0;j<ketebalan;j++){
					printf(" ");
				}
				for(j=0;j<ketebalan;j++){
					printf(" ");
				}
				for(j=0;j<ketebalan;j++){
					printf(" ");
				}
		}else if(sat2 == 7){
			//PROSES JIKA SATUAN MERUPAKAN ANGKA 7
				for(j=0;j<ketebalan;j++){
					printf("0");
				}
				for(j=0;j<ketebalan;j++){
					printf("0");
				}
				for(j=0;j<ketebalan;j++){
					printf(" ");
				}
				for(j=0;j<ketebalan;j++){
					printf(" ");
				}
				for(j=0;j<ketebalan;j++){
					printf(" ");
				}
				for(j=0;j<ketebalan;j++){
					printf(" ");
				}
		}
	}
	
	int hasil; //VARIABEL HASIL OPERASI
	
	if(strcmp(operasi, "tambah") == 0){
		hasil = angk1 + angk2; //JIKA OPERASI ADALAH PERTAMBAHAN
	}else if(strcmp(operasi, "kali") == 0){
		hasil = angk1 * angk2; //JIKA OPERASI ADALAH PERKALIAN
	}else if(strcmp(operasi, "bagi") == 0){
		hasil = angk1 * angk2; //JIKA OPERASI ADALAH PEMBAGIAN
	}else if(strcmp(operasi, "kurang") == 0){
		hasil = angk1 - angk2; //JIKA OPERASI ADALAH PENGURANGAN
	}
	/*PROSES PEMISAHAN HASIL*/
	int rathas = 0; //WADAH UNTUK MENAMPUNG ANGKA RATUSAN HASIL
	int pulhas = 0; //WADAH UNTUK MENAMPUNG ANGKA PULUHAN HASIL
	int sathas = 0; //WADAH UNTUK MENAMPUNG ANGKA SATUAN  HASIL
	
	if(hasil>=100 && hasil<1000){ //PROSES PEMISAHAN JIKA INPUTAN HASIL MERUPAKAN RATUSAN
		rathas = hasil/100; //PEMISAHAN RATUSAN DAN PENAMPUNGAN ANGKA RATUSAN DARI HASIL
		pulhas = (hasil - rathas * 100) / 10; //PEMISAHAN PULUHAN DAN PENAMPUNGAN ANGKA PULUHAN DARI HASIL
		sathas = ( hasil - rathas * 100 - pulhas * 10); //PEMISAHAN SATUAN DAN PENAMPUNGAN ANGKA SATUAN DARI HASIL
	}else if(hasil>=10 && hasil<100){ //PROSES PEMISAHAN JIKA HASIL MERUPAKAN PULUHAN
		pulhas = hasil/10;//PROSES PEMISAHAN JIKA INPUTAN HASIL MERUPAKAN PULUHAN
		sathas = hasil - pulhas*10;  //PEMISAHAN SATUAN DAN PENAMPUNGAN ANGKA SATUAN DARI HASIL
	}else if(hasil>=0 && hasil<10){
		sathas = hasil;//PEMISAHAN SATUAN DAN PENAMPUNGAN ANGKA SATUAN DARI HASIL
	}
	
	if(hasil>=100 && hasil<1000){ //JIKA HASIL ADALAH RATUSAN
		if((rathas == 2) || (rathas == 3) || (rathas == 5) || (rathas == 6) || (rathas == 8) || (rathas == 9)) {

				for(j=0;j<ketebalan;j++){
					printf(" ");
				}
				for(j=0;j<ketebalan;j++){
					printf("0");
				}
				for(j=0;j<ketebalan;j++){
					printf(" ");
				}
				for(j=0;j<1;j++){
					printf(" ");
				}
			
		}	
		else if(rathas == 7){
		
				for(j=0;j<ketebalan;j++){
					printf("0");
				}
				for(j=0;j<ketebalan;j++){
					printf("0");
				}
				for(j=0;j<ketebalan;j++){
					printf(" ");
				}
				for(j=0;j<1;j++){
					printf(" ");
				}
			
			
		}else{
			
				for(j=0;j<ketebalan;j++){
					printf(" ");
				}
				for(j=0;j<ketebalan;j++){
					printf(" ");
				}
				for(j=0;j<ketebalan;j++){
					printf(" ");
				}
				for(j=0;j<1;j++){
					printf(" ");
				}
			
					
		}
		
		
		if((pulhas == 0) || (pulhas == 2) || (pulhas == 3) || (pulhas == 5) || (pulhas == 6) || (pulhas == 8) || (pulhas == 9)) {
			
				for(j=0;j<ketebalan;j++){
					printf(" ");
				}
				for(j=0;j<ketebalan;j++){
					printf("0");
				}
				for(j=0;j<ketebalan;j++){
					printf(" ");
				}
				for(j=0;j<1;j++){
					printf(" ");
				}
			
		}else if((pulhas == 1) || (pulhas == 4)){
			
				for(j=0;j<ketebalan;j++){
					printf(" ");
				}
				for(j=0;j<ketebalan;j++){
					printf(" ");
				}
				for(j=0;j<ketebalan;j++){
					printf(" ");
				}
				for(j=0;j<1;j++){
					printf(" ");
				}
			
		}else if(pulhas == 7){
			
				for(j=0;j<ketebalan;j++){
					printf("0");
				}
				for(j=0;j<ketebalan;j++){
					printf("0");
				}
				for(j=0;j<ketebalan;j++){
					printf(" ");
				}
				for(j=0;j<1;j++){
					printf(" ");
				}
			
		}
		
		
		if((sathas == 0) || (sathas == 2) || (sathas == 3) || (sathas == 5) || (sathas == 6) || (sathas == 8) || (sathas == 9)) {
				for(j=0;j<ketebalan;j++){
					printf(" ");
				}
				for(j=0;j<ketebalan;j++){
					printf("0");
				}
				for(j=0;j<ketebalan;j++){
					printf(" ");
				}
				for(j=0;j<ketebalan;j++){
					printf(" ");
				}
				for(j=0;j<ketebalan;j++){
					printf(" ");
				}
		}else if((sathas == 1) || (sathas == 4)){
			
				for(j=0;j<ketebalan;j++){
					printf(" ");
				}
				for(j=0;j<ketebalan;j++){
					printf(" ");
				}
				for(j=0;j<ketebalan;j++){
					printf(" ");
				}
				for(j=0;j<ketebalan;j++){
					printf(" ");
				}
				for(j=0;j<ketebalan;j++){
					printf(" ");
				}
		}else if(sathas == 7){
			
				for(j=0;j<ketebalan;j++){
					printf("0");
				}
				for(j=0;j<ketebalan;j++){
					printf("0");
				}
				for(j=0;j<ketebalan;j++){
					printf(" ");
				}
				for(j=0;j<ketebalan;j++){
					printf(" ");
				}
				for(j=0;j<ketebalan;j++){
					printf(" ");
				}
		}	
		printf("\n");
	}
	
	//JIKA HASIL ADALAH PULUHAN
	if(hasil>=10 && hasil<100){
		
		if((pulhas == 2) || (pulhas == 3) || (pulhas == 5) || (pulhas == 6) || (pulhas == 8) || (pulhas == 9)) {
			
				for(j=0;j<ketebalan;j++){
					printf(" ");
				}
				for(j=0;j<ketebalan;j++){
					printf("0");
				}
				for(j=0;j<ketebalan;j++){
					printf(" ");
				}
				for(j=0;j<1;j++){
					printf(" ");
				}
			
		}else if((pulhas== 1) || (pulhas == 4)){
			
				for(j=0;j<ketebalan;j++){
					printf(" ");
				}
				for(j=0;j<ketebalan;j++){
					printf(" ");
				}
				for(j=0;j<ketebalan;j++){
					printf(" ");
				}
				for(j=0;j<1;j++){
					printf(" ");
				}
			
		}else if(pulhas == 7){
			
				for(j=0;j<ketebalan;j++){
					printf("0");
				}
				for(j=0;j<ketebalan;j++){
					printf("0");
				}
				for(j=0;j<ketebalan;j++){
					printf(" ");
				}
				for(j=0;j<1;j++){
					printf(" ");
				}
			
		}
		
		
		if((sathas == 0) || (sathas == 2) || (sathas == 3) || (sathas == 5) || (sathas == 6) || (sathas == 8) || (sathas == 9)) {
			
				for(j=0;j<ketebalan;j++){
					printf(" ");
				}
				for(j=0;j<ketebalan;j++){
					printf("0");
				}
				for(j=0;j<ketebalan;j++){
					printf(" ");
				}
				for(j=0;j<ketebalan;j++){
					printf(" ");
				}
				for(j=0;j<ketebalan;j++){
					printf(" ");
				}
		}else if((sathas == 1) || (sathas == 4)){
			
				for(j=0;j<ketebalan;j++){
					printf(" ");
				}
				for(j=0;j<ketebalan;j++){
					printf(" ");
				}
				for(j=0;j<ketebalan;j++){
					printf(" ");
				}
				for(j=0;j<ketebalan;j++){
					printf(" ");
				}
				for(j=0;j<ketebalan;j++){
					printf(" ");
				}
		}else if(sathas == 7){
			
				for(j=0;j<ketebalan;j++){
					printf("0");
				}
				for(j=0;j<ketebalan;j++){
					printf("0");
				}
				for(j=0;j<ketebalan;j++){
					printf(" ");
				}
				for(j=0;j<ketebalan;j++){
					printf(" ");
				}
				for(j=0;j<ketebalan;j++){
					printf(" ");
				}
		}
		printf("\n");
	}
	
	//JIKA HASIL ADALAH SATUAN
	if(hasil>=1 && hasil<10){
				
		
		if((sathas == 0) || (sathas == 2) || (sathas == 3) || (sathas == 5) || (sathas == 6) || (sathas == 8) || (sathas == 9)) {
			
				for(j=0;j<ketebalan;j++){
					printf(" ");
				}
				for(j=0;j<ketebalan;j++){
					printf("0");
				}
				for(j=0;j<ketebalan;j++){
					printf(" ");
				}
				for(j=0;j<ketebalan;j++){
					printf(" ");
				}
				for(j=0;j<ketebalan;j++){
					printf(" ");
				}
		}else if((sathas == 1) || (sathas == 4)){
			
				for(j=0;j<ketebalan;j++){
					printf(" ");
				}
				for(j=0;j<ketebalan;j++){
					printf(" ");
				}
				for(j=0;j<ketebalan;j++){
					printf(" ");
				}
				for(j=0;j<ketebalan;j++){
					printf(" ");
				}
				for(j=0;j<ketebalan;j++){
					printf(" ");
				}
		}else if(sathas == 7){
			
				for(j=0;j<ketebalan;j++){
					printf("0");
				}
				for(j=0;j<ketebalan;j++){
					printf("0");
				}
				for(j=0;j<ketebalan;j++){
					printf(" ");
				}
				for(j=0;j<ketebalan;j++){
					printf(" ");
				}
				for(j=0;j<ketebalan;j++){
					printf(" ");
				}
		}
		printf("\n");
	}
	
	
	
}

//PROSEDUR UNTUK BARIS KEDUA
void baris2(int angk1,int angk2,char operasi[50], int ketebalan){
	int j; //ITERASI
	int sat1 = 0; //PENAMPUNG SATUAN ANGKA PERTAMA
	int pul1 = 0; //PENAMPUNG PULUHAN ANGKA PERTAMA
	int rat1 = 0; //PENAMPUNG RATUSAN ANGKA PERTAMA
	
	/*PEMISAHAN */
	if(angk1>=100 && angk1<1000){ //JIKA ANGKA PERTAMA ADALAH RATUSAN
		rat1 = angk1/100; 
		pul1 = (angk1 - rat1 * 100) / 10;
		sat1 = ( angk1 - rat1 * 100 - pul1 * 10);
	}else if(angk1>=10 && angk1<100){ //JIKA ANGKA PERTAMA ADALAH PULUHAN
		pul1 = angk1/10;
		sat1 = angk1 - pul1*10;
	}else if(angk1>=0 && angk1<10){ //JIKA ANGKA PERTAMA ADALAH SATUAN
		sat1 = angk1;
	}
	
	/*PENAMPILAN OUTPUT ANGKA PERTAMA*/
	if(angk1>=100 && angk1<1000){ //JIKA ANGKA PERTAMA ADALAH RATUSAN
		if((rat1 == 1) || (rat1 == 2) || (rat1 == 3) || (rat1 == 7) ) {

				for(j=0;j<ketebalan;j++){
					printf(" ");
				}
				for(j=0;j<ketebalan;j++){
					printf(" ");
				}
				for(j=0;j<ketebalan;j++){
					printf("0");
				}
				for(j=0;j<1;j++){
					printf(" ");
				}
			
		}
		
		else if((rat1 == 0) || (rat1 == 4) || (rat1 == 8) || (rat1 == 9)){
		
				for(j=0;j<ketebalan;j++){
					printf("0");
				}
				for(j=0;j<ketebalan;j++){
					printf(" ");
				}
				for(j=0;j<ketebalan;j++){
					printf("0");
				}
				for(j=0;j<1;j++){
					printf(" ");
				}
			
			
		}else{
			
				for(j=0;j<ketebalan;j++){
					printf("0");
				}
				for(j=0;j<ketebalan;j++){
					printf(" ");
				}
				for(j=0;j<ketebalan;j++){
					printf(" ");
				}
				for(j=0;j<1;j++){
					printf(" ");
				}
			
					
		}
		
		if((pul1 == 1) || (pul1 == 2) || (pul1 == 3) || (pul1 == 7) ) {

				for(j=0;j<ketebalan;j++){
					printf(" ");
				}
				for(j=0;j<ketebalan;j++){
					printf(" ");
				}
				for(j=0;j<ketebalan;j++){
					printf("0");
				}
				for(j=0;j<1;j++){
					printf(" ");
				}
			
		}
		
		else if((pul1 == 0) || (pul1 == 4) || (pul1 == 8) || (pul1 == 9)){
		
				for(j=0;j<ketebalan;j++){
					printf("0");
				}
				for(j=0;j<ketebalan;j++){
					printf(" ");
				}
				for(j=0;j<ketebalan;j++){
					printf("0");
				}
				for(j=0;j<1;j++){
					printf(" ");
				}
			
			
		}else{
			
				for(j=0;j<ketebalan;j++){
					printf("0");
				}
				for(j=0;j<ketebalan;j++){
					printf(" ");
				}
				for(j=0;j<ketebalan;j++){
					printf(" ");
				}
				for(j=0;j<1;j++){
					printf(" ");
				}
			
					
		}
		
		if((sat1 == 1) || (sat1 == 2) || (sat1 == 3) || (sat1 == 7) ) {

				for(j=0;j<ketebalan;j++){
					printf(" ");
				}
				for(j=0;j<ketebalan;j++){
					printf(" ");
				}
				for(j=0;j<ketebalan;j++){
					printf("0");
				}
				for(j=0;j<ketebalan;j++){
					printf(" ");
				}
			
		}
		
		else if((sat1 == 0) || (sat1 == 4) || (sat1 == 8) || (sat1 == 9)){
		
				for(j=0;j<ketebalan;j++){
					printf("0");
				}
				for(j=0;j<ketebalan;j++){
					printf(" ");
				}
				for(j=0;j<ketebalan;j++){
					printf("0");
				}
				for(j=0;j<ketebalan;j++){
					printf(" ");
				}
			
		}else{
			
				for(j=0;j<ketebalan;j++){
					printf("0");
				}
				for(j=0;j<ketebalan;j++){
					printf(" ");
				}
				for(j=0;j<ketebalan;j++){
					printf(" ");
				}
				for(j=0;j<ketebalan;j++){
					printf(" ");
				}
			
					
		}
		
	}
	
	if(angk1>=10 && angk1<100){ //JIKA ANGKA PERTAMA ADALAH PULUHAN
		
		if((pul1 == 1) || (pul1 == 2) || (pul1 == 3) || (pul1 == 7) ) {

				for(j=0;j<ketebalan;j++){
					printf(" ");
				}
				for(j=0;j<ketebalan;j++){
					printf(" ");
				}
				for(j=0;j<ketebalan;j++){
					printf("0");
				}
				for(j=0;j<1;j++){
					printf(" ");
				}
			
		}
		
		else if((pul1 == 0) || (pul1 == 4) || (pul1 == 8) || (pul1 == 9)){
		
				for(j=0;j<ketebalan;j++){
					printf("0");
				}
				for(j=0;j<ketebalan;j++){
					printf(" ");
				}
				for(j=0;j<ketebalan;j++){
					printf("0");
				}
				for(j=0;j<1;j++){
					printf(" ");
				}
			
			
		}else{
			
				for(j=0;j<ketebalan;j++){
					printf("0");
				}
				for(j=0;j<ketebalan;j++){
					printf(" ");
				}
				for(j=0;j<ketebalan;j++){
					printf(" ");
				}
				for(j=0;j<1;j++){
					printf(" ");
				}
			
					
		}
		
		
		if((sat1 == 1) || (sat1 == 2) || (sat1 == 3) || (sat1 == 7) ) {

				for(j=0;j<ketebalan;j++){
					printf(" ");
				}
				for(j=0;j<ketebalan;j++){
					printf(" ");
				}
				for(j=0;j<ketebalan;j++){
					printf("0");
				}
				for(j=0;j<ketebalan;j++){
					printf(" ");
				}
			
		}
		
		else if((sat1 == 0) || (sat1 == 4) || (sat1 == 8) || (sat1 == 9)){
		
				for(j=0;j<ketebalan;j++){
					printf("0");
				}
				for(j=0;j<ketebalan;j++){
					printf(" ");
				}
				for(j=0;j<ketebalan;j++){
					printf("0");
				}
				for(j=0;j<ketebalan;j++){
					printf(" ");
				}
			
			
		}else{
			
				for(j=0;j<ketebalan;j++){
					printf("0");
				}
				for(j=0;j<ketebalan;j++){
					printf(" ");
				}
				for(j=0;j<ketebalan;j++){
					printf(" ");
				}
				for(j=0;j<ketebalan;j++){
					printf(" ");
				}
				
		}
		
	}
	if(angk1>=1 && angk1<10){ //JIKA ANGKA PERTAMA ADALAH SATUAN
				
		
		if((sat1 == 1) || (sat1 == 2) || (sat1 == 3) || (sat1 == 7) ) {

				for(j=0;j<ketebalan;j++){
					printf(" ");
				}
				for(j=0;j<ketebalan;j++){
					printf(" ");
				}
				for(j=0;j<ketebalan;j++){
					printf("0");
				}
				for(j=0;j<ketebalan;j++){
					printf(" ");
				}
		}
		
		else if((sat1 == 0) || (sat1 == 4) || (sat1 == 8) || (sat1 == 9)){
		
				for(j=0;j<ketebalan;j++){
					printf("0");
				}
				for(j=0;j<ketebalan;j++){
					printf(" ");
				}
				for(j=0;j<ketebalan;j++){
					printf("0");
				}
				for(j=0;j<ketebalan;j++){
					printf(" ");
				}
			
		}else{
			
				for(j=0;j<ketebalan;j++){
					printf("0");
				}
				for(j=0;j<ketebalan;j++){
					printf(" ");
				}
				for(j=0;j<ketebalan;j++){
					printf(" ");
				}
				for(j=0;j<ketebalan;j++){
					printf(" ");
				}
					
		}
		
	}
	
	//PENAMPILAN OUTPUT DARI OPERASI
	if(strcmp(operasi,"tambah") == 0){
		for(j=0;j<ketebalan;j++){
			printf(" ");
		}
		for(j=0;j<ketebalan;j++){
			printf("0");
		}
		for(j=0;j<ketebalan;j++){
			printf(" ");
		}
		for(j=0;j<ketebalan;j++){
			printf(" ");
		}
	}
	if(strcmp(operasi,"kurang") == 0){
		for(j=0;j<ketebalan;j++){
			printf(" ");
		}
		for(j=0;j<ketebalan;j++){
			printf(" ");
		}
		for(j=0;j<ketebalan;j++){
			printf(" ");
		}
		for(j=0;j<ketebalan;j++){
			printf(" ");
		}
	}
	else if(strcmp(operasi,"kali") == 0){
		for(j=0;j<ketebalan;j++){
			printf("0");
		}
		for(j=0;j<ketebalan;j++){
			printf(" ");
		}
		for(j=0;j<ketebalan;j++){
			printf("0");
		}
		for(j=0;j<ketebalan;j++){
			printf(" ");
		}
	}
	else if(strcmp(operasi,"bagi") == 0){
		for(j=0;j<ketebalan;j++){
			printf(" ");
		}
		for(j=0;j<ketebalan;j++){
			printf(" ");
		}
		for(j=0;j<ketebalan;j++){
			printf("0");
		}
		for(j=0;j<ketebalan;j++){
			printf(" ");
		}
	}
	
	/*PEMISAHAN ANGKA KEDUA*/
	int sat2 = 0; //PENAMPUNG SATUAN DARI ANGKA KEDUA
	int pul2 = 0; //PENAMPUNG PULUHAN DARI ANGKA KEDUA
	int rat2 = 0; //PENAMPUNG RATUSAN DARI ANGKA KEDUA
	
	if(angk2>=100 && angk2<1000){ //JIKA ANGKA KEDUA ADALAH RATUSAN
		rat2 = angk2/100;
		pul2 = (angk2 - rat2 * 100) / 10;
		sat2 = ( angk2 - rat2 * 100 - pul2 * 10);
	}else if(angk2>=10 && angk2<100){ //JIKA ANGKA KEDUA ADALAH PULUHAN
		pul2 = angk2/10;
		sat2 = angk2 - pul1*10;
	}else if(angk2>=0 && angk2<10){ //JIKA ANGKA KEDUA ADALAH SATUAN
		sat2 = angk2;
	}
	
	/*PENAMPILAN OUTPUT */
	if(angk2>=100 && angk2<1000){//JIKA ANGKA KEDUA ADALAH RATUSAN
		if((rat2 == 1) || (rat2 == 2) || (rat2 == 3) || (rat2 == 7) ) {

				for(j=0;j<ketebalan;j++){
					printf(" ");
				}
				for(j=0;j<ketebalan;j++){
					printf(" ");
				}
				for(j=0;j<ketebalan;j++){
					printf("0");
				}
				for(j=0;j<1;j++){
					printf(" ");
				}
			
		}
		
		else if((rat2 == 0) || (rat2 == 4) || (rat2 == 8) || (rat2 == 9)){
		
				for(j=0;j<ketebalan;j++){
					printf("0");
				}
				for(j=0;j<ketebalan;j++){
					printf(" ");
				}
				for(j=0;j<ketebalan;j++){
					printf("0");
				}
				for(j=0;j<1;j++){
					printf(" ");
				}
			
			
		}else{
			
				for(j=0;j<ketebalan;j++){
					printf("0");
				}
				for(j=0;j<ketebalan;j++){
					printf(" ");
				}
				for(j=0;j<ketebalan;j++){
					printf(" ");
				}
				for(j=0;j<1;j++){
					printf(" ");
				}
			
					
		}
		
		if((pul2 == 1) || (pul2 == 2) || (pul2 == 3) || (pul2 == 7) ) {

				for(j=0;j<ketebalan;j++){
					printf(" ");
				}
				for(j=0;j<ketebalan;j++){
					printf(" ");
				}
				for(j=0;j<ketebalan;j++){
					printf("0");
				}
				for(j=0;j<1;j++){
					printf(" ");
				}
			
		}
		
		else if((pul2 == 0) || (pul2 == 4) || (pul2 == 8) || (pul2 == 9)){
		
				for(j=0;j<ketebalan;j++){
					printf("0");
				}
				for(j=0;j<ketebalan;j++){
					printf(" ");
				}
				for(j=0;j<ketebalan;j++){
					printf("0");
				}
				for(j=0;j<1;j++){
					printf(" ");
				}
			
			
		}else{
			
				for(j=0;j<ketebalan;j++){
					printf("0");
				}
				for(j=0;j<ketebalan;j++){
					printf(" ");
				}
				for(j=0;j<ketebalan;j++){
					printf(" ");
				}
				for(j=0;j<1;j++){
					printf(" ");
				}
			
					
		}
		
		if((sat2 == 1) || (sat2 == 2) || (sat2 == 3) || (sat2 == 7) ) {

				for(j=0;j<ketebalan;j++){
					printf(" ");
				}
				for(j=0;j<ketebalan;j++){
					printf(" ");
				}
				for(j=0;j<ketebalan;j++){
					printf("0");
				}
				for(j=0;j<ketebalan;j++){
					printf(" ");
				}
				for(j=0;j<ketebalan;j++){
					printf("0");
				}
				for(j=0;j<ketebalan;j++){
					printf(" ");
				}
			
		}
		
		else if((sat2 == 0) || (sat2 == 4) || (sat2 == 8) || (sat2 == 9)){
		
				for(j=0;j<ketebalan;j++){
					printf("0");
				}
				for(j=0;j<ketebalan;j++){
					printf(" ");
				}
				for(j=0;j<ketebalan;j++){
					printf("0");
				}
				for(j=0;j<ketebalan;j++){
					printf(" ");
				}
				for(j=0;j<ketebalan;j++){
					printf("0");
				}
				for(j=0;j<ketebalan;j++){
					printf(" ");
				}
			
		}else{
			
				for(j=0;j<ketebalan;j++){
					printf("0");
				}
				for(j=0;j<ketebalan;j++){
					printf(" ");
				}
				for(j=0;j<ketebalan;j++){
					printf(" ");
				}
				for(j=0;j<ketebalan;j++){
					printf(" ");
				}
				for(j=0;j<ketebalan;j++){
					printf("0");
				}
				for(j=0;j<ketebalan;j++){
					printf(" ");
				}
		}
		
	}
	
	if(angk2>=10 && angk2<100){ //JIKA ANGKA KEDUA ADALAH PULUHAN
		
		if((pul2 == 1) || (pul2 == 2) || (pul2 == 3) || (pul2 == 7) ) {
				for(j=0;j<ketebalan;j++){
					printf(" ");
				}
				
				for(j=0;j<ketebalan;j++){
					printf(" ");
				}
				for(j=0;j<ketebalan;j++){
					printf("0");
				}
				for(j=0;j<1;j++){
					printf(" ");
				}
			
		}
		
		else if((pul2 == 0) || (pul2 == 4) || (pul2 == 8) || (pul2 == 9)){
		
				for(j=0;j<ketebalan;j++){
					printf("0");
				}
				for(j=0;j<ketebalan;j++){
					printf(" ");
				}
				for(j=0;j<ketebalan;j++){
					printf("0");
				}
				for(j=0;j<1;j++){
					printf(" ");
				}
			
			
		}else{
			
				for(j=0;j<ketebalan;j++){
					printf("0");
				}
				for(j=0;j<ketebalan;j++){
					printf(" ");
				}
				for(j=0;j<ketebalan;j++){
					printf(" ");
				}
				for(j=0;j<1;j++){
					printf(" ");
				}
			
					
		}
		
		
		if((sat2 == 1) || (sat2 == 2) || (sat2 == 3) || (sat2 == 7) ) {

				for(j=0;j<ketebalan;j++){
					printf(" ");
				}
				for(j=0;j<ketebalan;j++){
					printf(" ");
				}
				for(j=0;j<ketebalan;j++){
					printf("0");
				}
				for(j=0;j<ketebalan;j++){
					printf(" ");
				}
				for(j=0;j<ketebalan;j++){
					printf("0");
				}
				for(j=0;j<ketebalan;j++){
					printf(" ");
				}
		}
		
		else if((sat2 == 0) || (sat2 == 4) || (sat2 == 8) || (sat2 == 9)){
		
				for(j=0;j<ketebalan;j++){
					printf("0");
				}
				for(j=0;j<ketebalan;j++){
					printf(" ");
				}
				for(j=0;j<ketebalan;j++){
					printf("0");
				}
				for(j=0;j<ketebalan;j++){
					printf(" ");
				}
				for(j=0;j<ketebalan;j++){
					printf("0");
				}
				for(j=0;j<ketebalan;j++){
					printf(" ");
				}
				
		}else{
			
				for(j=0;j<ketebalan;j++){
					printf("0");
				}
				for(j=0;j<ketebalan;j++){
					printf(" ");
				}
				for(j=0;j<ketebalan;j++){
					printf(" ");
				}
				for(j=0;j<ketebalan;j++){
					printf(" ");
				}
				for(j=0;j<ketebalan;j++){
					printf("0");
				}
				for(j=0;j<ketebalan;j++){
					printf(" ");
				}
		}
		
	}
	if(angk2>=1 && angk2<10){ //JIKA ANGKA KEDUA ADALAH SATUAN
				
		
		if((sat2 == 1) || (sat2 == 2) || (sat2 == 3) || (sat2 == 7) ) {

				for(j=0;j<ketebalan;j++){
					printf(" ");
				}
				for(j=0;j<ketebalan;j++){
					printf(" ");
				}
				for(j=0;j<ketebalan;j++){
					printf("0");
				}
				for(j=0;j<ketebalan;j++){
					printf(" ");
				}
				for(j=0;j<ketebalan;j++){
					printf("0");
				}
				for(j=0;j<ketebalan;j++){
					printf(" ");
				}
		}
		
		else if((sat2 == 0) || (sat2 == 4) || (sat2 == 8) || (sat2 == 9)){
		
				for(j=0;j<ketebalan;j++){
					printf("0");
				}
				for(j=0;j<ketebalan;j++){
					printf(" ");
				}
				for(j=0;j<ketebalan;j++){
					printf("0");
				}
				for(j=0;j<ketebalan;j++){
					printf(" ");
				}
				for(j=0;j<ketebalan;j++){
					printf("0");
				}
				for(j=0;j<ketebalan;j++){
					printf(" ");
				}
		}else{
			
				for(j=0;j<ketebalan;j++){
					printf("0");
				}
				for(j=0;j<ketebalan;j++){
					printf(" ");
				}
				for(j=0;j<ketebalan;j++){
					printf(" ");
				}
				for(j=0;j<ketebalan;j++){
					printf(" ");
				}
				for(j=0;j<ketebalan;j++){
					printf("0");
				}
				for(j=0;j<ketebalan;j++){
					printf(" ");
				}	
		}
		
	}
	
	
	
	
	int hasil; //VARIABEL UNTUK HASIL
	
	//MEMBUAT NILAI HASIL OPERASI
	if(strcmp(operasi, "tambah") == 0){
		hasil = angk1 + angk2;
	}else if(strcmp(operasi, "kali") == 0){
		hasil = angk1 * angk2;
	}else if(strcmp(operasi, "bagi") == 0){
		hasil = angk1 * angk2;
	}else if(strcmp(operasi, "kurang") == 0){
		hasil = angk1 - angk2;
	}
	
	/*PEMISAHAN*/
	int rathas = 0; //PENAMPUNG ANGKA RATUSAN DARI HASIL
	int pulhas = 0; //PENAMPUNG ANGKA PULUHAN DARI HASIL
	int sathas = 0; //PENAMPUNG ANGKA SATUAN DARI HASIL
	
	if(hasil>=100 && hasil<1000){ //JIKA HASIL ADALAH RATUSAN
		rathas = hasil/100;
		pulhas = (hasil - rathas * 100) / 10;
		sathas = ( hasil - rathas * 100 - pulhas * 10);
	}else if(hasil>=10 && hasil<100){ //JIKA HASIL ADALAH PULUHAN
		pulhas = hasil/10;
		sathas = hasil - pulhas*10;
	}else if(hasil>=0 && hasil<10){ //JIKA HASIL ADALAH SATUAN
		sathas = hasil;
	}
	
	/*PENAMPILAN OUTPUT*/
	if(hasil>=100 && hasil<1000){ //JIKA HASIL ADALAH RATUSAN
		if((rathas == 1) || (rathas == 2) || (rathas == 3) || (rathas == 7) ) {

				for(j=0;j<ketebalan;j++){
					printf(" ");
				}
				for(j=0;j<ketebalan;j++){
					printf(" ");
				}
				for(j=0;j<ketebalan;j++){
					printf("0");
				}
				for(j=0;j<1;j++){
					printf(" ");
				}
			
		}
		
		else if((rathas == 0) || (rathas == 4) || (rathas == 8) || (rathas == 9)){
		
				for(j=0;j<ketebalan;j++){
					printf("0");
				}
				for(j=0;j<ketebalan;j++){
					printf(" ");
				}
				for(j=0;j<ketebalan;j++){
					printf("0");
				}
				for(j=0;j<1;j++){
					printf(" ");
				}
			
			
		}else{
			
				for(j=0;j<ketebalan;j++){
					printf("0");
				}
				for(j=0;j<ketebalan;j++){
					printf(" ");
				}
				for(j=0;j<ketebalan;j++){
					printf(" ");
				}
				for(j=0;j<1;j++){
					printf(" ");
				}
			
					
		}
		
		if((pulhas == 1) || (pulhas == 2) || (pulhas == 3) || (pulhas == 7) ) {

				for(j=0;j<ketebalan;j++){
					printf(" ");
				}
				for(j=0;j<ketebalan;j++){
					printf(" ");
				}
				for(j=0;j<ketebalan;j++){
					printf("0");
				}
				for(j=0;j<1;j++){
					printf(" ");
				}
			
		}
		
		else if((pulhas == 0) || (pulhas == 4) || (pulhas == 8) || (pulhas == 9)){
		
				for(j=0;j<ketebalan;j++){
					printf("0");
				}
				for(j=0;j<ketebalan;j++){
					printf(" ");
				}
				for(j=0;j<ketebalan;j++){
					printf("0");
				}
				for(j=0;j<1;j++){
					printf(" ");
				}
			
			
		}else{
			
				for(j=0;j<ketebalan;j++){
					printf("0");
				}
				for(j=0;j<ketebalan;j++){
					printf(" ");
				}
				for(j=0;j<ketebalan;j++){
					printf(" ");
				}
				for(j=0;j<1;j++){
					printf(" ");
				}
			
					
		}
		
		if((sathas == 1) || (sathas == 2) || (sathas == 3) || (sathas == 7) ) {

				for(j=0;j<ketebalan;j++){
					printf(" ");
				}
				for(j=0;j<ketebalan;j++){
					printf(" ");
				}
				for(j=0;j<ketebalan;j++){
					printf("0");
				}
				for(j=0;j<ketebalan;j++){
					printf(" ");
				}
				for(j=0;j<ketebalan;j++){
					printf(" ");
				}
			
		}
		
		else if((sathas == 0) || (sathas == 4) || (sathas == 8) || (sathas == 9)){
		
				for(j=0;j<ketebalan;j++){
					printf("0");
				}
				for(j=0;j<ketebalan;j++){
					printf(" ");
				}
				for(j=0;j<ketebalan;j++){
					printf("0");
				}
				for(j=0;j<ketebalan;j++){
					printf(" ");
				}
				for(j=0;j<ketebalan;j++){
					printf(" ");
				}
			
		}else{
			
				for(j=0;j<ketebalan;j++){
					printf("0");
				}
				for(j=0;j<ketebalan;j++){
					printf(" ");
				}
				for(j=0;j<ketebalan;j++){
					printf(" ");
				}
				for(j=0;j<ketebalan;j++){
					printf(" ");
				}
				for(j=0;j<ketebalan;j++){
					printf(" ");
				}
		}
		printf("\n");
	}
	
	if(hasil>=10 && hasil<100){ //JIKA HASIL ADALAH PULUHAN
		
		if((pulhas == 1) || (pulhas == 2) || (pulhas == 3) || (pulhas == 7) ) {

				for(j=0;j<ketebalan;j++){
					printf(" ");
				}
				for(j=0;j<ketebalan;j++){
					printf(" ");
				}
				for(j=0;j<ketebalan;j++){
					printf("0");
				}
				for(j=0;j<1;j++){
					printf(" ");
				}
			
		}
		
		else if((pulhas == 0) || (pulhas == 4) || (pulhas == 8) || (pulhas == 9)){
		
				for(j=0;j<ketebalan;j++){
					printf("0");
				}
				for(j=0;j<ketebalan;j++){
					printf(" ");
				}
				for(j=0;j<ketebalan;j++){
					printf("0");
				}
				for(j=0;j<1;j++){
					printf(" ");
				}
			
			
		}else{
			
				for(j=0;j<ketebalan;j++){
					printf("0");
				}
				for(j=0;j<ketebalan;j++){
					printf(" ");
				}
				for(j=0;j<ketebalan;j++){
					printf(" ");
				}
				for(j=0;j<1;j++){
					printf(" ");
				}
				
			
					
		}
		
		
		if((sathas == 1) || (sathas == 2) || (sathas == 3) || (sathas == 7) ) {

				for(j=0;j<ketebalan;j++){
					printf(" ");
				}
				for(j=0;j<ketebalan;j++){
					printf(" ");
				}
				for(j=0;j<ketebalan;j++){
					printf("0");
				}
				for(j=0;j<ketebalan;j++){
					printf(" ");
				}
				for(j=0;j<ketebalan;j++){
					printf(" ");
				}
		}
		
		else if((sathas == 0) || (sathas == 4) || (sat2 == 8) || (sat2 == 9)){
		
				for(j=0;j<ketebalan;j++){
					printf("0");
				}
				for(j=0;j<ketebalan;j++){
					printf(" ");
				}
				for(j=0;j<ketebalan;j++){
					printf("0");
				}
				for(j=0;j<ketebalan;j++){
					printf(" ");
				}
				for(j=0;j<ketebalan;j++){
					printf(" ");
				}
			
		}else{
			
				for(j=0;j<ketebalan;j++){
					printf("0");
				}
				for(j=0;j<ketebalan;j++){
					printf(" ");
				}
				for(j=0;j<ketebalan;j++){
					printf(" ");
				}
				for(j=0;j<ketebalan;j++){
					printf(" ");
				}
				for(j=0;j<ketebalan;j++){
					printf(" ");
				}
		}
		printf("\n");
	}
	if(hasil>=1 && hasil<10){ //JIKA HASIL ADALAH SATUAN
				
		
		if((sathas == 1) || (sathas == 2) || (sathas == 3) || (sathas == 7) ) {

				for(j=0;j<ketebalan;j++){
					printf(" ");
				}
				for(j=0;j<ketebalan;j++){
					printf(" ");
				}
				for(j=0;j<ketebalan;j++){
					printf("0");
				}
				for(j=0;j<ketebalan;j++){
					printf(" ");
				}
				for(j=0;j<ketebalan;j++){
					printf(" ");
				}
		}
		
		else if((sathas == 0) || (sathas == 4) || (sathas == 8) || (sathas == 9)){
		
				for(j=0;j<ketebalan;j++){
					printf("0");
				}
				for(j=0;j<ketebalan;j++){
					printf(" ");
				}
				for(j=0;j<ketebalan;j++){
					printf("0");
				}
				for(j=0;j<ketebalan;j++){
					printf(" ");
				}
				for(j=0;j<ketebalan;j++){
					printf(" ");
				}
			
		}else{
			
				for(j=0;j<ketebalan;j++){
					printf("0");
				}
				for(j=0;j<ketebalan;j++){
					printf(" ");
				}
				for(j=0;j<ketebalan;j++){
					printf(" ");
				}
				for(j=0;j<ketebalan;j++){
					printf(" ");
				}
				for(j=0;j<ketebalan;j++){
					printf(" ");
				}
			
					
		}
		printf("\n");
	}
	
	
	
}


//PROSEDUR BARIS KETIGA
void baris3(int angk1,int angk2,char operasi[50], int ketebalan){
	int j; //ITERASI
	/*PEMISAHAN*/
	int sat1 = 0; //PENAMPUNG SATUAN DARI ANGKA PERTAMA 
	int pul1 = 0; //PENAMPUNG PULUHAN DARI ANGKA PERTAMA
	int rat1 = 0; //PENAMPUNG RATUSAN DARI ANGKA PERTAMA
	
	if(angk1>=100 && angk1<1000){ //JIKA ANGKA PERTAMA ADALAH RATUSAN
		rat1 = angk1/100;
		pul1 = (angk1 - rat1 * 100) / 10;
		sat1 = ( angk1 - rat1 * 100 - pul1 * 10);
	}else if(angk1>=10 && angk1<100){ //JIKA ANGKA PERTAMA ADALAH PULUHAN
		pul1 = angk1/10;
		sat1 = angk1 - pul1*10;
	}else if(angk1>=0 && angk1<10){ //JIKA ANGKA PERTAMA ADALAH SATUAN
		sat1 = angk1;
	}
	
	/*PENAMPILAN OUTPUT*/
	if(angk1>=100 && angk1<1000){ //JIKA ANGKA PERTAMA ADALAH RATUSAN
		if((rat1 == 2) || (rat1 == 3) || (rat1 == 4) || (rat1 == 5) || (rat1 == 6) || (rat1 == 8) || (rat1 == 9)) {

				for(j=0;j<ketebalan;j++){
					printf(" ");
				}
				for(j=0;j<ketebalan;j++){
					printf("0");
				}
				for(j=0;j<ketebalan;j++){
					printf(" ");
				}
				for(j=0;j<1;j++){
					printf(" ");
				}
			
		}	
		else if((rat1 == 7) || (rat1 == 0) || (rat1 == 1)){
		
				for(j=0;j<ketebalan;j++){
					printf(" ");
				}
				for(j=0;j<ketebalan;j++){
					printf(" ");
				}
				for(j=0;j<ketebalan;j++){
					printf(" ");
				}
				for(j=0;j<1;j++){
					printf(" ");
				}
			
			
		}
		
		
		if((pul1 == 2) || (pul1 == 3) || (pul1 == 4) || (pul1 == 5) || (pul1 == 6) || (pul1 == 8) || (pul1 == 9)) {

				for(j=0;j<ketebalan;j++){
					printf(" ");
				}
				for(j=0;j<ketebalan;j++){
					printf("0");
				}
				for(j=0;j<ketebalan;j++){
					printf(" ");
				}
				for(j=0;j<1;j++){
					printf(" ");
				}
			
		}
		
		
		else if((pul1 == 7) || (pul1 == 0) || (pul1 == 1)){
		
				for(j=0;j<ketebalan;j++){
					printf(" ");
				}
				for(j=0;j<ketebalan;j++){
					printf(" ");
				}
				for(j=0;j<ketebalan;j++){
					printf(" ");
				}
				for(j=0;j<1;j++){
					printf(" ");
				}
				
			
			
		}
		
		if((sat1 == 2) || (sat1 == 3) || (sat1 == 4) || (sat1 == 5) || (sat1 == 6) || (sat1 == 8) || (sat1 == 9)) {

				for(j=0;j<ketebalan;j++){
					printf(" ");
				}
				for(j=0;j<ketebalan;j++){
					printf("0");
				}
				for(j=0;j<ketebalan;j++){
					printf(" ");
				}
				for(j=0;j<ketebalan;j++){
					printf(" ");
				}
			
		}
		
		
		else if((sat1 == 7) || (sat1 == 0) || (sat1 == 1)){
		
				for(j=0;j<ketebalan;j++){
					printf(" ");
				}
				for(j=0;j<ketebalan;j++){
					printf(" ");
				}
				for(j=0;j<ketebalan;j++){
					printf(" ");
				}
				for(j=0;j<ketebalan;j++){
					printf(" ");
				}
			
			
		}
		
		
		
	}
	
	
	if(angk1>=10 && angk1<100){ //JIKA ANGKA PERTAMA ADALAH PULUHAN
		
		if((pul1 == 2) || (pul1 == 3) || (pul1 == 4) || (pul1 == 5) || (pul1 == 6) || (pul1 == 8) || (pul1 == 9)) {

				for(j=0;j<ketebalan;j++){
					printf(" ");
				}
				for(j=0;j<ketebalan;j++){
					printf("0");
				}
				for(j=0;j<ketebalan;j++){
					printf(" ");
				}
				for(j=0;j<1;j++){
					printf(" ");
				}
			
		}
		
		
		else if((pul1 == 7) || (pul1 == 0) || (pul1 == 1)){
		
				for(j=0;j<ketebalan;j++){
					printf(" ");
				}
				for(j=0;j<ketebalan;j++){
					printf(" ");
				}
				for(j=0;j<ketebalan;j++){
					printf(" ");
				}
				for(j=0;j<1;j++){
					printf(" ");
				}
			
			
		}
		
		if((sat1 == 2) || (sat1 == 3) || (sat1 == 4) || (sat1 == 5) || (sat1 == 6) || (sat1 == 8) || (sat1 == 9)) {

				for(j=0;j<ketebalan;j++){
					printf(" ");
				}
				for(j=0;j<ketebalan;j++){
					printf("0");
				}
				for(j=0;j<ketebalan;j++){
					printf(" ");
				}
				for(j=0;j<ketebalan;j++){
					printf(" ");
				}
			
		}
		
		
		else if((sat1 == 7) || (sat1 == 0) || (sat1 == 1)){
		
				for(j=0;j<ketebalan;j++){
					printf(" ");
				}
				for(j=0;j<ketebalan;j++){
					printf(" ");
				}
				for(j=0;j<ketebalan;j++){
					printf(" ");
				}
				for(j=0;j<ketebalan;j++){
					printf(" ");
				}
			
			
		}
		
	}
	
	if(angk1>=1 && angk1<10){ //JIKA ANGKA PERTAMA ADALAH SATUAN
				
		
		if((sat1 == 2) || (sat1 == 3) || (sat1 == 4) || (sat1 == 5) || (sat1 == 6) || (sat1 == 8) || (sat1 == 9)) {

				for(j=0;j<ketebalan;j++){
					printf(" ");
				}
				for(j=0;j<ketebalan;j++){
					printf("0");
				}
				for(j=0;j<ketebalan;j++){
					printf(" ");
				}
				for(j=0;j<ketebalan;j++){
					printf(" ");
				}
			
		}
		
		
		else if((sat1 == 7) || (sat1 == 0) || (sat1 == 1)){
		
				for(j=0;j<ketebalan;j++){
					printf(" ");
				}
				for(j=0;j<ketebalan;j++){
					printf(" ");
				}
				for(j=0;j<ketebalan;j++){
					printf(" ");
				}
				for(j=0;j<ketebalan;j++){
					printf(" ");
				}
			
			
		}
		
	}
	/*PENAMPILAN OUTPUT OPERASI*/
	if((strcmp(operasi,"tambah") == 0) ){
			for(j=0;j<ketebalan;j++){
				printf("0");
			}
			for(j=0;j<ketebalan;j++){
				printf("0");
			}
			for(j=0;j<ketebalan;j++){
				printf("0");
			}
			for(j=0;j<ketebalan;j++){
				printf(" ");
			}
			
}else if((strcmp(operasi,"kurang") == 0) || (strcmp(operasi,"kali") == 0) || (strcmp(operasi,"bagi") == 0)){
			for(j=0;j<ketebalan;j++){
				printf(" ");
			}
			for(j=0;j<ketebalan;j++){
				printf("0");
			}
			for(j=0;j<ketebalan;j++){
				printf(" ");
			}
			for(j=0;j<ketebalan;j++){
				printf(" ");
			}
}		

	/*PEMISAHAN*/
	int sat2 = 0; //WADAH PENAMPUNG SATUAN ANGKA KEDUA
	int pul2 = 0; //WADAH PENAMPUNG PULUHAN ANGKA KEDUA
	int rat2 = 0; //WADAH PENAMPUNG RATUSAN ANGKA KEDUA
	
	if(angk2>=100 && angk2<1000){ //JIKA ANGKA KEDUA ADALAH RATUSAN
		rat2 = angk2/100;
		pul2 = (angk2 - rat2 * 100) / 10;
		sat2 = ( angk2 - rat2 * 100 - pul2 * 10);
	}else if(angk2>=10 && angk2<100){//JIKA ANGKA KEDUA ADALAH PULUHAN
		pul2 = angk2/10;
		sat2 = angk2 - pul1*10;
	}else if(angk2>=0 && angk2<10){ //JIKA ANGKA KEDUA ADALAH SATUAN
		sat2 = angk2;
	}
	
	/*PENAMPILAN OUTPUT*/
	if(angk2>=100 && angk2<1000){ //JIKA ANGKA KEDUA ADALAH RATUSAN
		if((rat2 == 2) || (rat2 == 3) || (rat2 == 4) || (rat2 == 5) || (rat2 == 6) || (rat2 == 8) || (rat2 == 9)) {

				for(j=0;j<ketebalan;j++){
					printf(" ");
				}
				for(j=0;j<ketebalan;j++){
					printf("0");
				}
				for(j=0;j<ketebalan;j++){
					printf(" ");
				}
				for(j=0;j<1;j++){
					printf(" ");
				}
			
		}	
		else if((rat2 == 7) || (rat2 == 0) || (rat2 == 1)){
		
				for(j=0;j<ketebalan;j++){
					printf(" ");
				}
				for(j=0;j<ketebalan;j++){
					printf(" ");
				}
				for(j=0;j<ketebalan;j++){
					printf(" ");
				}
				for(j=0;j<1;j++){
					printf(" ");
				}
			
			
		}
		
		
		if((pul2 == 2) || (pul2 == 3) || (pul2 == 4) || (pul2 == 5) || (pul2 == 6) || (pul2 == 8) || (pul2 == 9)) {

				for(j=0;j<ketebalan;j++){
					printf(" ");
				}
				for(j=0;j<ketebalan;j++){
					printf("0");
				}
				for(j=0;j<ketebalan;j++){
					printf(" ");
				}
				for(j=0;j<1;j++){
					printf(" ");
				}
			
		}
		
		
		else if((pul2 == 7) || (pul2 == 0) || (pul2 == 1)){
		
				for(j=0;j<ketebalan;j++){
					printf(" ");
				}
				for(j=0;j<ketebalan;j++){
					printf(" ");
				}
				for(j=0;j<ketebalan;j++){
					printf(" ");
				}
				for(j=0;j<1;j++){
					printf(" ");
				}
				
			
			
		}
		
		if((sat2 == 2) || (sat2 == 3) || (sat2 == 4) || (sat2 == 5) || (sat2 == 6) || (sat2 == 8) || (sat2 == 9)) {

				for(j=0;j<ketebalan;j++){
					printf(" ");
				}
				for(j=0;j<ketebalan;j++){
					printf("0");
				}
				for(j=0;j<ketebalan;j++){
					printf(" ");
				}
				for(j=0;j<ketebalan;j++){
					printf(" ");
				}
				for(j=0;j<ketebalan;j++){
					printf(" ");
				}
				for(j=0;j<ketebalan;j++){
					printf(" ");
				}
			
		}
		
		
		else if((sat2 == 7) || (sat2 == 0) || (sat2 == 1)){
		
				for(j=0;j<ketebalan;j++){
					printf(" ");
				}
				for(j=0;j<ketebalan;j++){
					printf(" ");
				}
				for(j=0;j<ketebalan;j++){
					printf(" ");
				}
				for(j=0;j<ketebalan;j++){
					printf(" ");
				}
				for(j=0;j<ketebalan;j++){
					printf(" ");
				}
				for(j=0;j<ketebalan;j++){
					printf(" ");
				}
			
			
		}
		
		
		
	}
	
	
	if(angk2>=10 && angk2<100){//JIKA ANGKA KEDUA ADALAH PULUHAN
		
		if((pul2 == 2) || (pul2 == 3) || (pul2 == 4) || (pul2 == 5) || (pul2 == 6) || (pul2 == 8) || (pul2 == 9)) {

				for(j=0;j<ketebalan;j++){
					printf(" ");
				}
				for(j=0;j<ketebalan;j++){
					printf("0");
				}
				for(j=0;j<ketebalan;j++){
					printf(" ");
				}
				for(j=0;j<1;j++){
					printf(" ");
				}
			
		}
		
		
		else if((pul2 == 7) || (pul2 == 0) || (pul2 == 1)){
		
				for(j=0;j<ketebalan;j++){
					printf(" ");
				}
				for(j=0;j<ketebalan;j++){
					printf(" ");
				}
				for(j=0;j<ketebalan;j++){
					printf(" ");
				}
				for(j=0;j<1;j++){
					printf(" ");
				}
			
			
		}
		
		if((sat2 == 2) || (sat2 == 3) || (sat2 == 4) || (sat2 == 5) || (sat2 == 6) || (sat1 == 8) || (sat1 == 9)) {

				for(j=0;j<ketebalan;j++){
					printf(" ");
				}
				for(j=0;j<ketebalan;j++){
					printf("0");
				}
				for(j=0;j<ketebalan;j++){
					printf(" ");
				}
				for(j=0;j<ketebalan;j++){
					printf(" ");
				}
				for(j=0;j<ketebalan;j++){
					printf(" ");
				}
				for(j=0;j<ketebalan;j++){
					printf(" ");
				}
			
		}
		
		
		else if((sat2 == 7) || (sat2 == 0) || (sat2 == 1)){
		
				for(j=0;j<ketebalan;j++){
					printf(" ");
				}
				for(j=0;j<ketebalan;j++){
					printf(" ");
				}
				for(j=0;j<ketebalan;j++){
					printf(" ");
				}
				for(j=0;j<ketebalan;j++){
					printf(" ");
				}
				for(j=0;j<ketebalan;j++){
					printf(" ");
				}
				for(j=0;j<ketebalan;j++){
					printf(" ");
				}
			
			
		}
		
	}
	
	if(angk2>=1 && angk2<10){ //JIKA ANGKA KEDUA ADALAH SATUAN
				
		
		if((sat2 == 2) || (sat2 == 3) || (sat2 == 4) || (sat2 == 5) || (sat2 == 6) || (sat2 == 8) || (sat2 == 9)) {

				for(j=0;j<ketebalan;j++){
					printf(" ");
				}
				for(j=0;j<ketebalan;j++){
					printf("0");
				}
				for(j=0;j<ketebalan;j++){
					printf(" ");
				}
				for(j=0;j<ketebalan;j++){
					printf(" ");
				}
				for(j=0;j<ketebalan;j++){
					printf(" ");
				}
				for(j=0;j<ketebalan;j++){
					printf(" ");
				}
		}
		
		
		else if((sat2 == 7) || (sat2 == 0) || (sat2 == 1)){
		
				for(j=0;j<ketebalan;j++){
					printf(" ");
				}
				for(j=0;j<ketebalan;j++){
					printf(" ");
				}
				for(j=0;j<ketebalan;j++){
					printf(" ");
				}
				for(j=0;j<ketebalan;j++){
					printf(" ");
				}
				for(j=0;j<ketebalan;j++){
					printf(" ");
				}
				for(j=0;j<ketebalan;j++){
					printf(" ");
				}
			
			
		}
		
	}
	
	int hasil; //VARIABEL HASIL
	
	//HASIL OPERASI
	if(strcmp(operasi, "tambah") == 0){
		hasil = angk1 + angk2;
	}else if(strcmp(operasi, "kali") == 0){
		hasil = angk1 * angk2;
	}else if(strcmp(operasi, "bagi") == 0){
		hasil = angk1 * angk2;
	}else if(strcmp(operasi, "kurang") == 0){
		hasil = angk1 - angk2;
	}
	
	//PEMISAHAN
	int rathas = 0;
	int pulhas = 0;
	int sathas = 0;
	
	
	if(hasil>=100 && hasil<1000){
		rathas = hasil/100;
		pulhas = (hasil - rathas * 100) / 10;
		sathas = ( hasil - rathas * 100 - pulhas * 10);
	}else if(hasil>=10 && hasil<100){
		pulhas = hasil/10;
		sathas = hasil - pulhas*10;
	}else if(hasil>=0 && hasil<10){
		sathas = hasil;
	}
	
	/*PENAMPILAN OUTPUT*/
	if(hasil>=100 && hasil<1000){ //JIKA HASIL ADALAH RATUSAN
		if((rathas == 2) || (rathas == 3) || (rathas == 4) || (rathas == 5) || (rathas == 6) || (rathas == 8) || (rathas == 9)) {

				for(j=0;j<ketebalan;j++){
					printf(" ");
				}
				for(j=0;j<ketebalan;j++){
					printf("0");
				}
				for(j=0;j<ketebalan;j++){
					printf(" ");
				}
				for(j=0;j<1;j++){
					printf(" ");
				}
			
		}	
		else if((rathas == 7) || (rathas == 0) || (rathas == 1)){
		
				for(j=0;j<ketebalan;j++){
					printf(" ");
				}
				for(j=0;j<ketebalan;j++){
					printf(" ");
				}
				for(j=0;j<ketebalan;j++){
					printf(" ");
				}
				for(j=0;j<1;j++){
					printf(" ");
				}
			
			
		}
		
		
		if((pulhas == 2) || (pulhas == 3) || (pulhas == 4) || (pulhas == 5) || (pulhas == 6) || (pulhas == 8) || (pulhas == 9)) {

				for(j=0;j<ketebalan;j++){
					printf(" ");
				}
				for(j=0;j<ketebalan;j++){
					printf("0");
				}
				for(j=0;j<ketebalan;j++){
					printf(" ");
				}
				for(j=0;j<1;j++){
					printf(" ");
				}
			
		}
		
		
		else if((pulhas == 7) || (pulhas == 0) || (pulhas == 1)){
		
				for(j=0;j<ketebalan;j++){
					printf(" ");
				}
				for(j=0;j<ketebalan;j++){
					printf(" ");
				}
				for(j=0;j<ketebalan;j++){
					printf(" ");
				}
				for(j=0;j<1;j++){
					printf(" ");
				}
				
			
			
		}
		
		if((sathas == 2) || (sathas == 3) || (sathas == 4) || (sathas == 5) || (sathas == 6) || (sathas == 8) || (sathas == 9)) {

				for(j=0;j<ketebalan;j++){
					printf(" ");
				}
				for(j=0;j<ketebalan;j++){
					printf("0");
				}
				for(j=0;j<ketebalan;j++){
					printf(" ");
				}
				for(j=0;j<ketebalan;j++){
					printf(" ");
				}
				for(j=0;j<ketebalan;j++){
					printf(" ");
				}
			
		}
		
		
		else if((sathas == 7) || (sathas == 0) || (sathas == 1)){
		
				for(j=0;j<ketebalan;j++){
					printf(" ");
				}
				for(j=0;j<ketebalan;j++){
					printf(" ");
				}
				for(j=0;j<ketebalan;j++){
					printf(" ");
				}
				for(j=0;j<ketebalan;j++){
					printf(" ");
				}
				for(j=0;j<ketebalan;j++){
					printf(" ");
				}
			
		}
		printf("\n");
	}
	
	
	if(hasil>=10 && hasil<100){ //JIKA HASIL ADALAH PULUHAN
		
		if((pulhas == 2) || (pulhas == 3) || (pulhas == 4) || (pulhas == 5) || (pulhas == 6) || (pulhas == 8) || (pulhas == 9)) {

				for(j=0;j<ketebalan;j++){
					printf(" ");
				}
				for(j=0;j<ketebalan;j++){
					printf("0");
				}
				for(j=0;j<ketebalan;j++){
					printf(" ");
				}
				for(j=0;j<1;j++){
					printf(" ");
				}
			
		}
		
		
		else if((pulhas == 7) || (pulhas == 0) || (pulhas == 1)){
		
				for(j=0;j<ketebalan;j++){
					printf(" ");
				}
				for(j=0;j<ketebalan;j++){
					printf(" ");
				}
				for(j=0;j<ketebalan;j++){
					printf(" ");
				}
				for(j=0;j<1;j++){
					printf(" ");
				}
			
			
		}
		
		if((sathas == 2) || (sathas == 3) || (sathas == 4) || (sathas == 5) || (sathas == 6) || (sathas == 8) || (sathas == 9)) {

				for(j=0;j<ketebalan;j++){
					printf(" ");
				}
				for(j=0;j<ketebalan;j++){
					printf("0");
				}
				for(j=0;j<ketebalan;j++){
					printf(" ");
				}
				for(j=0;j<ketebalan;j++){
					printf(" ");
				}
				for(j=0;j<ketebalan;j++){
					printf(" ");
				}
			
		}
		
		
		else if((sathas == 7) || (sathas == 0) || (sathas == 1)){
		
				for(j=0;j<ketebalan;j++){
					printf(" ");
				}
				for(j=0;j<ketebalan;j++){
					printf(" ");
				}
				for(j=0;j<ketebalan;j++){
					printf(" ");
				}
				for(j=0;j<ketebalan;j++){
					printf(" ");
				}
			
			
		}
		printf("\n");
	}
	
	if(hasil>=1 && hasil<10){ //JIKA HASIL ADALAH SATUAN
				
		
		if((sathas == 2) || (sathas == 3) || (sathas == 4) || (sathas == 5) || (sathas == 6) || (sathas == 8) || (sathas == 9)) {

				for(j=0;j<ketebalan;j++){
					printf(" ");
				}
				for(j=0;j<ketebalan;j++){
					printf("0");
				}
				for(j=0;j<ketebalan;j++){
					printf(" ");
				}
				for(j=0;j<ketebalan;j++){
					printf(" ");
				}
				for(j=0;j<ketebalan;j++){
					printf(" ");
				}
			
		}
		
		
		else if((sathas == 7) || (sat1 == 0) || (sat1 == 1)){
		
				for(j=0;j<ketebalan;j++){
					printf(" ");
				}
				for(j=0;j<ketebalan;j++){
					printf(" ");
				}
				for(j=0;j<ketebalan;j++){
					printf(" ");
				}
				for(j=0;j<ketebalan;j++){
					printf(" ");
				}
			
			
		}
		printf("\n");
	}
}	
	


//PROSEDUR UNTUK BARIS KE 4
void baris4(int angk1,int angk2,char operasi[50], int ketebalan){
	int j; //ITERASI
	
	//PEMISAHAN ANGKA PERTAMA
	int sat1 = 0; 
	int pul1 = 0;
	int rat1 = 0;
	
	if(angk1>=100 && angk1<1000){
		rat1 = angk1/100;
		pul1 = (angk1 - rat1 * 100) / 10;
		sat1 = ( angk1 - rat1 * 100 - pul1 * 10);
	}else if(angk1>=10 && angk1<100){
		pul1 = angk1/10;
		sat1 = angk1 - pul1*10;
	}else if(angk1>=0 && angk1<10){
		sat1 = angk1;
	}
	
	/*PENAMPILAN OUTPUT*/
	if(angk1>=100 && angk1<1000){ //JIKA ANGKA PERTAMA ADALAH RATUSAN
		if((rat1 == 0) || (rat1 == 6) || (rat1 == 8)) {

				for(j=0;j<ketebalan;j++){
					printf("0");
				}
				for(j=0;j<ketebalan;j++){
					printf(" ");
				}
				for(j=0;j<ketebalan;j++){
					printf("0");
				}
				for(j=0;j<1;j++){
					printf(" ");
				}
			
		}	
		else if((rat1 == 1) || (rat1 == 3) || (rat1 == 4) || (rat1 == 5) || (rat1 == 7) || (rat1 == 9)){
		
				for(j=0;j<ketebalan;j++){
					printf(" ");
				}
				for(j=0;j<ketebalan;j++){
					printf(" ");
				}
				for(j=0;j<ketebalan;j++){
					printf("0");
				}
				for(j=0;j<1;j++){
					printf(" ");
				}
			
			
		}else if(rat1 == 2){
			
				for(j=0;j<ketebalan;j++){
					printf("0");
				}
				for(j=0;j<ketebalan;j++){
					printf(" ");
				}
				for(j=0;j<ketebalan;j++){
					printf(" ");
				}
				for(j=0;j<1;j++){
					printf(" ");
				}
			
					
		}
		
		
		if((pul1 == 0) || (pul1 == 6) || (pul1 == 8)) {

				for(j=0;j<ketebalan;j++){
					printf("0");
				}
				for(j=0;j<ketebalan;j++){
					printf(" ");
				}
				for(j=0;j<ketebalan;j++){
					printf("0");
				}
				for(j=0;j<1;j++){
					printf(" ");
				}
			
		}	
		else if((pul1 == 1) || (pul1 == 3) || (pul1 == 4) || (pul1 == 5) || (pul1 == 7) || (pul1 == 9)){
		
				for(j=0;j<ketebalan;j++){
					printf(" ");
				}
				for(j=0;j<ketebalan;j++){
					printf(" ");
				}
				for(j=0;j<ketebalan;j++){
					printf("0");
				}
				for(j=0;j<1;j++){
					printf(" ");
				}
			
			
		}else if(pul1 == 2){
			
				for(j=0;j<ketebalan;j++){
					printf("0");
				}
				for(j=0;j<ketebalan;j++){
					printf(" ");
				}
				for(j=0;j<ketebalan;j++){
					printf(" ");
				}
				for(j=0;j<1;j++){
					printf(" ");
				}
			
					
		}
		
		
		if((sat1 == 0) || (sat1 == 6) || (sat1 == 8)) {

				for(j=0;j<ketebalan;j++){
					printf("0");
				}
				for(j=0;j<ketebalan;j++){
					printf(" ");
				}
				for(j=0;j<ketebalan;j++){
					printf("0");
				}
				for(j=0;j<ketebalan;j++){
					printf(" ");
				}
			
		}	
		else if((sat1 == 1) || (sat1 == 3) || (sat1 == 4) || (sat1 == 5) || (sat1 == 7) || (sat1 == 9)){
		
				for(j=0;j<ketebalan;j++){
					printf(" ");
				}
				for(j=0;j<ketebalan;j++){
					printf(" ");
				}
				for(j=0;j<ketebalan;j++){
					printf("0");
				}
				for(j=0;j<ketebalan;j++){
					printf(" ");
				}
			
			
		}else if(sat1 == 2){
			
				for(j=0;j<ketebalan;j++){
					printf("0");
				}
				for(j=0;j<ketebalan;j++){
					printf(" ");
				}
				for(j=0;j<ketebalan;j++){
					printf(" ");
				}
				for(j=0;j<ketebalan;j++){
					printf(" ");
				}
			
					
		}
		
	}
	
	
	if(angk1>=10 && angk1<100){ //JIKA ANGKA PERTAMA ADALAH PULUHAN
		
		if((pul1 == 0) || (pul1 == 6) || (pul1 == 8)) {

				for(j=0;j<ketebalan;j++){
					printf("0");
				}
				for(j=0;j<ketebalan;j++){
					printf(" ");
				}
				for(j=0;j<ketebalan;j++){
					printf("0");
				}
				for(j=0;j<1;j++){
					printf(" ");
				}
			
		}	
		else if((pul1 == 1) || (pul1 == 3) || (pul1 == 4) || (pul1 == 5) || (pul1 == 7) || (pul1 == 9)){
		
				for(j=0;j<ketebalan;j++){
					printf(" ");
				}
				for(j=0;j<ketebalan;j++){
					printf(" ");
				}
				for(j=0;j<ketebalan;j++){
					printf("0");
				}
				for(j=0;j<1;j++){
					printf(" ");
				}
			
			
		}else if(pul1 == 2){
			
				for(j=0;j<ketebalan;j++){
					printf("0");
				}
				for(j=0;j<ketebalan;j++){
					printf(" ");
				}
				for(j=0;j<ketebalan;j++){
					printf(" ");
				}
				for(j=0;j<1;j++){
					printf(" ");
				}
			
					
		}
		
		
		if((sat1 == 0) || (sat1 == 6) || (sat1 == 8)) {

				for(j=0;j<ketebalan;j++){
					printf("0");
				}
				for(j=0;j<ketebalan;j++){
					printf(" ");
				}
				for(j=0;j<ketebalan;j++){
					printf("0");
				}
				for(j=0;j<ketebalan;j++){
					printf(" ");
				}
			
		}	
		else if((sat1 == 1) || (sat1 == 3) || (sat1 == 4) || (sat1 == 5) || (sat1 == 7) || (sat1 == 9)){
		
				for(j=0;j<ketebalan;j++){
					printf(" ");
				}
				for(j=0;j<ketebalan;j++){
					printf(" ");
				}
				for(j=0;j<ketebalan;j++){
					printf("0");
				}
				for(j=0;j<ketebalan;j++){
					printf(" ");
				}
			
			
		}else if(sat1 == 2){
			
				for(j=0;j<ketebalan;j++){
					printf("0");
				}
				for(j=0;j<ketebalan;j++){
					printf(" ");
				}
				for(j=0;j<ketebalan;j++){
					printf(" ");
				}
				for(j=0;j<ketebalan;j++){
					printf(" ");
				}
			
					
		}
		
	}
	
	if(angk1>=1 && angk1<10){ //JIKA ANGKA PERTAMA ADALAH SATUAN
				
		
		if((sat1 == 0) || (sat1 == 6) || (sat1 == 8)) {

				for(j=0;j<ketebalan;j++){
					printf("0");
				}
				for(j=0;j<ketebalan;j++){
					printf(" ");
				}
				for(j=0;j<ketebalan;j++){
					printf("0");
				}
				for(j=0;j<ketebalan;j++){
					printf(" ");
				}
			
		}	
		else if((sat1 == 1) || (sat1 == 3) || (sat1 == 4) || (sat1 == 5) || (sat1 == 7) || (sat1 == 9)){
		
				for(j=0;j<ketebalan;j++){
					printf(" ");
				}
				for(j=0;j<ketebalan;j++){
					printf(" ");
				}
				for(j=0;j<ketebalan;j++){
					printf("0");
				}
				for(j=0;j<ketebalan;j++){
					printf(" ");
				}
			
			
		}else if(sat1 == 2){
			
				for(j=0;j<ketebalan;j++){
					printf("0");
				}
				for(j=0;j<ketebalan;j++){
					printf(" ");
				}
				for(j=0;j<ketebalan;j++){
					printf(" ");
				}
				for(j=0;j<ketebalan;j++){
					printf(" ");
				}
			
					
		}
		
	}
	
	/*PENAMPILAN OUTPUT OPERASI*/
	if((strcmp(operasi,"tambah") == 0)) {
			for(j=0;j<ketebalan;j++){
				printf(" ");
			}
			for(j=0;j<ketebalan;j++){
				printf("0");
			}
			for(j=0;j<ketebalan;j++){
				printf(" ");
			}
			for(j=0;j<ketebalan;j++){
				printf(" ");
			}
			
	}
	if((strcmp(operasi,"kurang") == 0)) {
			for(j=0;j<ketebalan;j++){
				printf(" ");
			}
			for(j=0;j<ketebalan;j++){
				printf(" ");
			}
			for(j=0;j<ketebalan;j++){
				printf(" ");
			}
			for(j=0;j<ketebalan;j++){
				printf(" ");
			}
			
	}
	if((strcmp(operasi,"kali") == 0)) {
			for(j=0;j<ketebalan;j++){
				printf("0");
			}
			for(j=0;j<ketebalan;j++){
				printf(" ");
			}
			for(j=0;j<ketebalan;j++){
				printf("0");
			}
			for(j=0;j<ketebalan;j++){
				printf(" ");
			}
			
	}
	if((strcmp(operasi,"bagi") == 0)) {
			for(j=0;j<ketebalan;j++){
				printf("0");
			}
			for(j=0;j<ketebalan;j++){
				printf(" ");
			}
			for(j=0;j<ketebalan;j++){
				printf(" ");
			}
			for(j=0;j<ketebalan;j++){
				printf(" ");
			}
			
	}
	
	/*PEMISAHAN ANGKA KEDUA*/
	int sat2 = 0;
	int pul2 = 0;
	int rat2 = 0;
	
	if(angk2>=100 && angk2<1000){
		rat2 = angk2/100;
		pul2 = (angk2 - rat2 * 100) / 10;
		sat2 = ( angk2 - rat2 * 100 - pul2 * 10);
	}else if(angk2>=10 && angk2<100){
		pul2 = angk2/10;
		sat2 = angk2 - pul1*10;
	}else if(angk2>=0 && angk2<10){
		sat2 = angk2;
	}
	
	/*PENAMPILAN OUTPUT ANGKA KEDUA*/
	if(angk2>=100 && angk2<1000){ //JIKA ANGKA KEDUA ADALAH RATUSAN
		if((rat2 == 0) || (rat2 == 6) || (rat2 == 8)) {

				for(j=0;j<ketebalan;j++){
					printf("0");
				}
				for(j=0;j<ketebalan;j++){
					printf(" ");
				}
				for(j=0;j<ketebalan;j++){
					printf("0");
				}
				for(j=0;j<1;j++){
					printf(" ");
				}
			
		}	
		else if((rat2 == 1) || (rat2 == 3) || (rat2 == 4) || (rat2 == 5) || (rat2 == 7) || (rat2 == 9)){
		
				for(j=0;j<ketebalan;j++){
					printf(" ");
				}
				for(j=0;j<ketebalan;j++){
					printf(" ");
				}
				for(j=0;j<ketebalan;j++){
					printf("0");
				}
				for(j=0;j<1;j++){
					printf(" ");
				}
			
			
		}else if(rat2 == 2){
			
				for(j=0;j<ketebalan;j++){
					printf("0");
				}
				for(j=0;j<ketebalan;j++){
					printf(" ");
				}
				for(j=0;j<ketebalan;j++){
					printf(" ");
				}
				for(j=0;j<1;j++){
					printf(" ");
				}
			
					
		}
		
		
		if((pul2 == 0) || (pul2 == 6) || (pul2 == 8)) {

				for(j=0;j<ketebalan;j++){
					printf("0");
				}
				for(j=0;j<ketebalan;j++){
					printf(" ");
				}
				for(j=0;j<ketebalan;j++){
					printf("0");
				}
				for(j=0;j<1;j++){
					printf(" ");
				}
			
		}	
		else if((pul2 == 1) || (pul2 == 3) || (pul2 == 4) || (pul2 == 5) || (pul2 == 7) || (pul2 == 9)){
		
				for(j=0;j<ketebalan;j++){
					printf(" ");
				}
				for(j=0;j<ketebalan;j++){
					printf(" ");
				}
				for(j=0;j<ketebalan;j++){
					printf("0");
				}
				for(j=0;j<1;j++){
					printf(" ");
				}
			
			
		}else if(pul2 == 2){
			
				for(j=0;j<ketebalan;j++){
					printf("0");
				}
				for(j=0;j<ketebalan;j++){
					printf(" ");
				}
				for(j=0;j<ketebalan;j++){
					printf(" ");
				}
				for(j=0;j<1;j++){
					printf(" ");
				}
			
					
		}
		
		
		if((sat2 == 0) || (sat2 == 6) || (sat2 == 8)) {

				for(j=0;j<ketebalan;j++){
					printf("0");
				}
				for(j=0;j<ketebalan;j++){
					printf(" ");
				}
				for(j=0;j<ketebalan;j++){
					printf("0");
				}
				for(j=0;j<ketebalan;j++){
					printf(" ");
				}
				for(j=0;j<ketebalan;j++){
					printf("0");
				}
				for(j=0;j<ketebalan;j++){
					printf(" ");
				}
			
		}	
		else if((sat2 == 1) || (sat2 == 3) || (sat2 == 4) || (sat2 == 5) || (sat2 == 7) || (sat1 == 9)){
		
				for(j=0;j<ketebalan;j++){
					printf(" ");
				}
				for(j=0;j<ketebalan;j++){
					printf(" ");
				}
				for(j=0;j<ketebalan;j++){
					printf("0");
				}
				for(j=0;j<ketebalan;j++){
					printf(" ");
				}
				for(j=0;j<ketebalan;j++){
					printf("0");
				}
				for(j=0;j<ketebalan;j++){
					printf(" ");
				}
			
		}else if(sat2 == 2){
			
				for(j=0;j<ketebalan;j++){
					printf("0");
				}
				for(j=0;j<ketebalan;j++){
					printf(" ");
				}
				for(j=0;j<ketebalan;j++){
					printf(" ");
				}
				for(j=0;j<ketebalan;j++){
					printf(" ");
				}
				for(j=0;j<ketebalan;j++){
					printf("0");
				}
				for(j=0;j<ketebalan;j++){
					printf(" ");
				}
					
		}
		
	}
	
	
	if(angk2>=10 && angk2<100){ //JIKA ANGKA KEDUA ADALAH PULUHAN
		
		if((pul2 == 0) || (pul2 == 6) || (pul2 == 8)) {

				for(j=0;j<ketebalan;j++){
					printf("0");
				}
				for(j=0;j<ketebalan;j++){
					printf(" ");
				}
				for(j=0;j<ketebalan;j++){
					printf("0");
				}
				for(j=0;j<1;j++){
					printf(" ");
				}
			
		}	
		else if((pul2 == 1) || (pul2 == 3) || (pul2 == 4) || (pul2 == 5) || (pul2 == 7) || (pul2 == 9)){
		
				for(j=0;j<ketebalan;j++){
					printf(" ");
				}
				for(j=0;j<ketebalan;j++){
					printf(" ");
				}
				for(j=0;j<ketebalan;j++){
					printf("0");
				}
				for(j=0;j<1;j++){
					printf(" ");
				}
			
			
		}else if(pul2 == 2){
			
				for(j=0;j<ketebalan;j++){
					printf("0");
				}
				for(j=0;j<ketebalan;j++){
					printf(" ");
				}
				for(j=0;j<ketebalan;j++){
					printf(" ");
				}
				for(j=0;j<1;j++){
					printf(" ");
				}
			
					
		}
		
		
		if((sat2 == 0) || (sat2 == 6) || (sat2 == 8)) {

				for(j=0;j<ketebalan;j++){
					printf("0");
				}
				for(j=0;j<ketebalan;j++){
					printf(" ");
				}
				for(j=0;j<ketebalan;j++){
					printf("0");
				}
				for(j=0;j<ketebalan;j++){
					printf(" ");
				}
				for(j=0;j<ketebalan;j++){
					printf("0");
				}
				for(j=0;j<ketebalan;j++){
					printf(" ");
				}
		}	
		else if((sat2 == 1) || (sat2 == 3) || (sat2 == 4) || (sat2 == 5) || (sat2 == 7) || (sat2 == 9)){
		
				for(j=0;j<ketebalan;j++){
					printf(" ");
				}
				for(j=0;j<ketebalan;j++){
					printf(" ");
				}
				for(j=0;j<ketebalan;j++){
					printf("0");
				}
				for(j=0;j<ketebalan;j++){
					printf(" ");
				}
				for(j=0;j<ketebalan;j++){
					printf("0");
				}
				for(j=0;j<ketebalan;j++){
					printf(" ");
				}
			
		}else if(sat2 == 2){
			
				for(j=0;j<ketebalan;j++){
					printf("0");
				}
				for(j=0;j<ketebalan;j++){
					printf(" ");
				}
				for(j=0;j<ketebalan;j++){
					printf(" ");
				}
				for(j=0;j<ketebalan;j++){
					printf(" ");
				}
				for(j=0;j<ketebalan;j++){
					printf("0");
				}
				for(j=0;j<ketebalan;j++){
					printf(" ");
				}
					
		}
		
	}
	
	if(angk2>=1 && angk2<10){ //JIKA ANGKA KEDUA ADALAH SATUAN
				
		
		if((sat2 == 0) || (sat2 == 6) || (sat2 == 8)) {

				for(j=0;j<ketebalan;j++){
					printf("0");
				}
				for(j=0;j<ketebalan;j++){
					printf(" ");
				}
				for(j=0;j<ketebalan;j++){
					printf("0");
				}
				for(j=0;j<ketebalan;j++){
					printf(" ");
				}
				for(j=0;j<ketebalan;j++){
					printf("0");
				}
				for(j=0;j<ketebalan;j++){
					printf(" ");
				}
			
		}	
		else if((sat2 == 1) || (sat2 == 3) || (sat2 == 4) || (sat2 == 5) || (sat2 == 7) || (sat2 == 9)){
		
				for(j=0;j<ketebalan;j++){
					printf(" ");
				}
				for(j=0;j<ketebalan;j++){
					printf(" ");
				}
				for(j=0;j<ketebalan;j++){
					printf("0");
				}
				for(j=0;j<ketebalan;j++){
					printf(" ");
				}
				for(j=0;j<ketebalan;j++){
					printf("0");
				}
				for(j=0;j<ketebalan;j++){
					printf(" ");
				}
			
		}else if(sat2 == 2){
			
				for(j=0;j<ketebalan;j++){
					printf("0");
				}
				for(j=0;j<ketebalan;j++){
					printf(" ");
				}
				for(j=0;j<ketebalan;j++){
					printf(" ");
				}
				for(j=0;j<ketebalan;j++){
					printf(" ");
				}
			
				for(j=0;j<ketebalan;j++){
					printf("0");
				}
				for(j=0;j<ketebalan;j++){
					printf(" ");
				}
		}
		
	}
	
	/*HASIL*/
	int hasil; 
	/*PENGOPRASIAN NILAI HASIL*/
	if(strcmp(operasi, "tambah") == 0){
		hasil = angk1 + angk2;
	}else if(strcmp(operasi, "kali") == 0){
		hasil = angk1 * angk2;
	}else if(strcmp(operasi, "bagi") == 0){
		hasil = angk1 * angk2;
	}else if(strcmp(operasi, "kurang") == 0){
		hasil = angk1 - angk2;
	}
	/*PEMISAHAN HASIL*/
	int rathas = 0;
	int pulhas = 0;
	int sathas = 0;
	
	if(hasil>=100 && hasil<1000){
		rathas = hasil/100;
		pulhas = (hasil - rathas * 100) / 10;
		sathas = ( hasil - rathas * 100 - pulhas * 10);
	}else if(hasil>=10 && hasil<100){
		pulhas = hasil/10;
		sathas = hasil - pulhas*10;
	}else if(hasil>=0 && hasil<10){
		sathas = hasil;
	}
	
	/*PENAMPILAN OUTPUT HASIL*/
	if(hasil >= 100 && hasil<1000){ //JIKA HASIL ADALAH RATUSAN
	if((rathas == 0) || (rathas == 6) || (rathas == 8)) {

				for(j=0;j<ketebalan;j++){
					printf("0");
				}
				for(j=0;j<ketebalan;j++){
					printf(" ");
				}
				for(j=0;j<ketebalan;j++){
					printf("0");
				}
				for(j=0;j<1;j++){
					printf(" ");
				}
			
		}	
		else if((rathas == 1) || (rathas == 3) || (rathas == 4) || (rathas == 5) || (rathas == 7) || (rathas == 9)){
		
				for(j=0;j<ketebalan;j++){
					printf(" ");
				}
				for(j=0;j<ketebalan;j++){
					printf(" ");
				}
				for(j=0;j<ketebalan;j++){
					printf("0");
				}
				for(j=0;j<1;j++){
					printf(" ");
				}
			
			
		}else if(rathas == 2){
			
				for(j=0;j<ketebalan;j++){
					printf("0");
				}
				for(j=0;j<ketebalan;j++){
					printf(" ");
				}
				for(j=0;j<ketebalan;j++){
					printf(" ");
				}
				for(j=0;j<1;j++){
					printf(" ");
				}
			
					
		}
		
		
		if((pulhas == 0) || (pulhas == 6) || (pulhas == 8)){

				for(j=0;j<ketebalan;j++){
					printf("0");
				}
				for(j=0;j<ketebalan;j++){
					printf(" ");
				}
				for(j=0;j<ketebalan;j++){
					printf("0");
				}
				for(j=0;j<1;j++){
					printf(" ");
				}
			
		}	
		else if((pulhas == 1) || (pulhas == 3) || (pulhas == 4) || (pulhas == 5) || (pulhas == 7) || (pulhas == 9)){
		
				for(j=0;j<ketebalan;j++){
					printf(" ");
				}
				for(j=0;j<ketebalan;j++){
					printf(" ");
				}
				for(j=0;j<ketebalan;j++){
					printf("0");
				}
				for(j=0;j<1;j++){
					printf(" ");
				}
			
			
		}else if(pulhas == 2){
			
				for(j=0;j<ketebalan;j++){
					printf("0");
				}
				for(j=0;j<ketebalan;j++){
					printf(" ");
				}
				for(j=0;j<ketebalan;j++){
					printf(" ");
				}
				for(j=0;j<1;j++){
					printf(" ");
				}
			
					
		}
		
		
		if((sathas == 0) || (sathas == 6) || (sathas == 8)) {

				for(j=0;j<ketebalan;j++){
					printf("0");
				}
				for(j=0;j<ketebalan;j++){
					printf(" ");
				}
				for(j=0;j<ketebalan;j++){
					printf("0");
				}
				for(j=0;j<ketebalan;j++){
					printf(" ");
				}
				for(j=0;j<ketebalan;j++){
					printf(" ");
				}
			
		}	
		else if((sathas == 1) || (sathas == 3) || (sathas == 4) || (sathas == 5) || (sathas == 7) || (sathas == 9)){
		
				for(j=0;j<ketebalan;j++){
					printf(" ");
				}
				for(j=0;j<ketebalan;j++){
					printf(" ");
				}
				for(j=0;j<ketebalan;j++){
					printf("0");
				}
				for(j=0;j<ketebalan;j++){
					printf(" ");
				}
				for(j=0;j<ketebalan;j++){
					printf(" ");
				}
			
			
		}else if(sathas == 2){
			
				for(j=0;j<ketebalan;j++){
					printf("0");
				}
				for(j=0;j<ketebalan;j++){
					printf(" ");
				}
				for(j=0;j<ketebalan;j++){
					printf(" ");
				}
				for(j=0;j<ketebalan;j++){
					printf(" ");
				}
				for(j=0;j<ketebalan;j++){
					printf(" ");
				}
					
		}
		printf("\n");
	}
	
	
	if(hasil>=10 && hasil<100){ //JIKA HASIL ADALAH PULUHAN
		
		if((pulhas == 0) || (pulhas == 6) || (pulhas == 8)) {

				for(j=0;j<ketebalan;j++){
					printf("0");
				}
				for(j=0;j<ketebalan;j++){
					printf(" ");
				}
				for(j=0;j<ketebalan;j++){
					printf("0");
				}
				for(j=0;j<1;j++){
					printf(" ");
				}
			
		}	
		else if((pulhas == 1) || (pulhas == 3) || (pulhas == 4) || (pulhas == 5) || (pulhas == 7) || (pulhas == 9)){
		
				for(j=0;j<ketebalan;j++){
					printf(" ");
				}
				for(j=0;j<ketebalan;j++){
					printf(" ");
				}
				for(j=0;j<ketebalan;j++){
					printf("0");
				}
				for(j=0;j<1;j++){
					printf(" ");
				}
			
			
		}else if(pulhas == 2){
			
				for(j=0;j<ketebalan;j++){
					printf("0");
				}
				for(j=0;j<ketebalan;j++){
					printf(" ");
				}
				for(j=0;j<ketebalan;j++){
					printf(" ");
				}
				for(j=0;j<1;j++){
					printf(" ");
				}
			
					
		}
		
		
		if((sathas == 0) || (sathas == 6) || (sathas == 8)) {

				for(j=0;j<ketebalan;j++){
					printf("0");
				}
				for(j=0;j<ketebalan;j++){
					printf(" ");
				}
				for(j=0;j<ketebalan;j++){
					printf("0");
				}
				for(j=0;j<ketebalan;j++){
					printf(" ");
				}
				for(j=0;j<ketebalan;j++){
					printf(" ");
				}
			
		}	
		else if((sathas == 1) || (sathas == 3) || (sathas == 4) || (sathas == 5) || (sathas == 7) || (sathas == 9)){
		
				for(j=0;j<ketebalan;j++){
					printf(" ");
				}
				for(j=0;j<ketebalan;j++){
					printf(" ");
				}
				for(j=0;j<ketebalan;j++){
					printf("0");
				}
				for(j=0;j<ketebalan;j++){
					printf(" ");
				}
				for(j=0;j<ketebalan;j++){
					printf(" ");
				}
			
			
		}else if(sathas == 2){
			
				for(j=0;j<ketebalan;j++){
					printf("0");
				}
				for(j=0;j<ketebalan;j++){
					printf(" ");
				}
				for(j=0;j<ketebalan;j++){
					printf(" ");
				}
				for(j=0;j<ketebalan;j++){
					printf(" ");
				}
				for(j=0;j<ketebalan;j++){
					printf(" ");
				}
					
		}
		printf("\n");
	}
	
	if(hasil>=1 && hasil<10){ //JIKA HASIL ADALAH SATUAN
				
		
		if((sathas == 0) || (sathas == 6) || (sathas == 8)) {

				for(j=0;j<ketebalan;j++){
					printf("0");
				}
				for(j=0;j<ketebalan;j++){
					printf(" ");
				}
				for(j=0;j<ketebalan;j++){
					printf("0");
				}
				for(j=0;j<ketebalan;j++){
					printf(" ");
				}
				for(j=0;j<ketebalan;j++){
					printf(" ");
				}
			
		}	
		else if((sathas == 1) || (sathas == 3) || (sathas == 4) || (sathas == 5) || (sathas == 7) || (sathas == 9)){
		
				for(j=0;j<ketebalan;j++){
					printf(" ");
				}
				for(j=0;j<ketebalan;j++){
					printf(" ");
				}
				for(j=0;j<ketebalan;j++){
					printf("0");
				}
				for(j=0;j<ketebalan;j++){
					printf(" ");
				}
				for(j=0;j<ketebalan;j++){
					printf(" ");
				}
			
		}else if(sathas == 2){
			
				for(j=0;j<ketebalan;j++){
					printf("0");
				}
				for(j=0;j<ketebalan;j++){
					printf(" ");
				}
				for(j=0;j<ketebalan;j++){
					printf(" ");
				}
				for(j=0;j<ketebalan;j++){
					printf(" ");
				}
			
				for(j=0;j<ketebalan;j++){
					printf(" ");
				}	
		}
		printf("\n");
	}
		
}

//PROSEDUR UNTUK BARIS KE 5
void baris5(int angk1,int angk2,char operasi[50], int ketebalan){
	int j; //ITERASI
	/*PEMISAHAN ANGKA PERTAMA*/
	int sat1 = 0; 
	int pul1 = 0;
	int rat1 = 0;
	
	if(angk1>=100 && angk1<1000){
		rat1 = angk1/100;
		pul1 = (angk1 - rat1 * 100) / 10;
		sat1 = ( angk1 - rat1 * 100 - pul1 * 10);
	}else if(angk1>=10 && angk1<100){
		pul1 = angk1/10;
		sat1 = angk1 - pul1*10;
	}else if(angk1>=0 && angk1<10){
		sat1 = angk1;
	}
	/*PENAMPILAN OUTPUT ANGKA PERTAMA*/
	if(angk1>=100 && angk1<1000){ //JIKA ANGKA PERTAMA ADALAH RATUSAN
		if((rat1 == 0) || (rat1 == 2) || (rat1 == 3) || (rat1 == 5) || (rat1 == 6) || (rat1 == 8) ||(rat1 == 9)) {

				for(j=0;j<ketebalan;j++){
					printf(" ");
				}
				for(j=0;j<ketebalan;j++){
					printf("0");
				}
				for(j=0;j<ketebalan;j++){
					printf(" ");
				}
				for(j=0;j<1;j++){
					printf(" ");
				}
			
		}	
		else if((rat1 == 1) || (rat1 == 7)){
		
				for(j=0;j<ketebalan;j++){
					printf(" ");
				}
				for(j=0;j<ketebalan;j++){
					printf(" ");
				}
				for(j=0;j<ketebalan;j++){
					printf(" ");
				}
				for(j=0;j<1;j++){
					printf(" ");
				}
			
			
		}else if((rat1 == 4)){
			
				for(j=0;j<ketebalan;j++){
					printf(" ");
				}
				for(j=0;j<ketebalan;j++){
					printf(" ");
				}
				for(j=0;j<ketebalan;j++){
					printf("0");
				}
				for(j=0;j<1;j++){
					printf(" ");
				}
			
					
		}
		
		
		if((pul1 == 0) || (pul1 == 2) || (pul1 == 3) || (pul1 == 5) || (pul1 == 6) || (pul1 == 8) || (pul1 == 9)) {

				for(j=0;j<ketebalan;j++){
					printf(" ");
				}
				for(j=0;j<ketebalan;j++){
					printf("0");
				}
				for(j=0;j<ketebalan;j++){
					printf(" ");
				}
				for(j=0;j<1;j++){
					printf(" ");
				}
			
		}	
		else if((pul1 == 1) || (pul1 == 7)){
		
				for(j=0;j<ketebalan;j++){
					printf(" ");
				}
				for(j=0;j<ketebalan;j++){
					printf(" ");
				}
				for(j=0;j<ketebalan;j++){
					printf(" ");
				}
				for(j=0;j<1;j++){
					printf(" ");
				}
			
			
		}else if((pul1 == 4)){
			
				for(j=0;j<ketebalan;j++){
					printf(" ");
				}
				for(j=0;j<ketebalan;j++){
					printf(" ");
				}
				for(j=0;j<ketebalan;j++){
					printf("0");
				}
				for(j=0;j<1;j++){
					printf(" ");
				}
			
					
		}
		
		
		if((sat1 == 0) || (sat1 == 2) || (sat1 == 3) || (sat1 == 5) || (sat1 == 6) || (sat1 == 8) || (sat1 == 9)) {

				for(j=0;j<ketebalan;j++){
					printf(" ");
				}
				for(j=0;j<ketebalan;j++){
					printf("0");
				}
				for(j=0;j<ketebalan;j++){
					printf(" ");
				}
				for(j=0;j<ketebalan;j++){
					printf(" ");
				}
			
		}	
		else if((sat1 == 1) || (sat1 == 7)){
		
				for(j=0;j<ketebalan;j++){
					printf(" ");
				}
				for(j=0;j<ketebalan;j++){
					printf(" ");
				}
				for(j=0;j<ketebalan;j++){
					printf(" ");
				}
				for(j=0;j<ketebalan;j++){
					printf(" ");
				}
			
			
		}else if((sat1 == 4)){
			
				for(j=0;j<ketebalan;j++){
					printf(" ");
				}
				for(j=0;j<ketebalan;j++){
					printf(" ");
				}
				for(j=0;j<ketebalan;j++){
					printf("0");
				}
				for(j=0;j<ketebalan;j++){
					printf(" ");
				}
			
		}
		
	}
	
	
	if(angk1>=10 && angk1<100){ //JIKA HASIL ADALAH PULUHAN
		
		if((pul1 == 0) || (pul1 == 2) || (pul1 == 3) || (pul1 == 5) || (pul1 == 6) || (pul1 == 8) || (pul1 == 9)) {

				for(j=0;j<ketebalan;j++){
					printf(" ");
				}
				for(j=0;j<ketebalan;j++){
					printf("0");
				}
				for(j=0;j<ketebalan;j++){
					printf(" ");
				}
				for(j=0;j<1;j++){
					printf(" ");
				}
			
		}	
		else if((pul1 == 1) || (pul1 == 7)){
		
				for(j=0;j<ketebalan;j++){
					printf(" ");
				}
				for(j=0;j<ketebalan;j++){
					printf(" ");
				}
				for(j=0;j<ketebalan;j++){
					printf(" ");
				}
				for(j=0;j<1;j++){
					printf(" ");
				}
			
			
		}else if((pul1 == 4)){
			
				for(j=0;j<ketebalan;j++){
					printf(" ");
				}
				for(j=0;j<ketebalan;j++){
					printf(" ");
				}
				for(j=0;j<ketebalan;j++){
					printf("0");
				}
				for(j=0;j<1;j++){
					printf(" ");
				}
			
					
		}
		
		
		if((sat1 == 0) || (sat1 == 2) || (sat1 == 3) || (sat1 == 5) || (sat1 == 6) || (sat1 == 8) ||(sat1 == 9)) {

				for(j=0;j<ketebalan;j++){
					printf(" ");
				}
				for(j=0;j<ketebalan;j++){
					printf("0");
				}
				for(j=0;j<ketebalan;j++){
					printf(" ");
				}
				for(j=0;j<ketebalan;j++){
					printf(" ");
				}
			
		}	
		else if((sat1 == 1) || (sat1 == 7)){
		
				for(j=0;j<ketebalan;j++){
					printf(" ");
				}
				for(j=0;j<ketebalan;j++){
					printf(" ");
				}
				for(j=0;j<ketebalan;j++){
					printf(" ");
				}
				for(j=0;j<ketebalan;j++){
					printf(" ");
				}
			
			
		}else if((sat1 == 4)){
			
				for(j=0;j<ketebalan;j++){
					printf(" ");
				}
				for(j=0;j<ketebalan;j++){
					printf(" ");
				}
				for(j=0;j<ketebalan;j++){
					printf("0");
				}
				for(j=0;j<ketebalan;j++){
					printf(" ");
				}
			
		}
		
	}
	
	if(angk1>=1 && angk1<10){ //JIKA ANGKA PERTAMA ADALAH SATUAN
				
		
		if((sat1 == 0) || (sat1 == 2) || (sat1 == 3) || (sat1 == 5) || (sat1 == 6) || (sat1 == 8) || (sat1 == 9)) {

				for(j=0;j<ketebalan;j++){
					printf(" ");
				}
				for(j=0;j<ketebalan;j++){
					printf("0");
				}
				for(j=0;j<ketebalan;j++){
					printf(" ");
				}
				for(j=0;j<ketebalan;j++){
					printf(" ");
				}
			
		}	
		else if((sat1 == 1) || (sat1 == 7)){
		
				for(j=0;j<ketebalan;j++){
					printf(" ");
				}
				for(j=0;j<ketebalan;j++){
					printf(" ");
				}
				for(j=0;j<ketebalan;j++){
					printf(" ");
				}
				for(j=0;j<ketebalan;j++){
					printf(" ");
				}
			
			
		}else if((sat1 == 4)){
			
				for(j=0;j<ketebalan;j++){
					printf(" ");
				}
				for(j=0;j<ketebalan;j++){
					printf(" ");
				}
				for(j=0;j<ketebalan;j++){
					printf("0");
				}
				for(j=0;j<ketebalan;j++){
					printf(" ");
				}
			
		}
		
	}
	
	/*OUTPUT OPERASI*/
	if((strcmp(operasi,"tambah") == 0) || (strcmp(operasi,"kali") == 0)||(strcmp(operasi,"bagi") == 0)||(strcmp(operasi,"kurang") == 0)){
			for(j=0;j<ketebalan;j++){
				printf(" ");
			}
			for(j=0;j<ketebalan;j++){
				printf(" ");
			}
			for(j=0;j<ketebalan;j++){
				printf(" ");
			}
			for(j=0;j<ketebalan;j++){
				printf(" ");
			}
			
	}
	/*PEMISAHAN ANGKA KEDUA*/
	int sat2 = 0;
	int pul2 = 0;
	int rat2 = 0;
	
	if(angk2>=100 && angk2<1000){
		rat2 = angk2/100;
		pul2 = (angk2 - rat2 * 100) / 10;
		sat2 = ( angk2 - rat2 * 100 - pul2 * 10);
	}else if(angk2>=10 && angk2<100){
		pul2 = angk2/10;
		sat2 = angk2 - pul1*10;
	}else if(angk2>=0 && angk2<10){
		sat2 = angk2;
	}
	/*PENAMPILAN OUTPUT ANGKA KEDUA*/
	if(angk2>=100 && angk2<1000){ //JIKA ANGKA KEDUA ADALAH RATUSAN
		if((rat2 == 0) || (rat2 == 2) || (rat2 == 3) || (rat2 == 5) || (rat2 == 6) || (rat2 == 8) ||  (rat2 == 9)) {

				for(j=0;j<ketebalan;j++){
					printf(" ");
				}
				for(j=0;j<ketebalan;j++){
					printf("0");
				}
				for(j=0;j<ketebalan;j++){
					printf(" ");
				}
				for(j=0;j<1;j++){
					printf(" ");
				}
			
		}	
		else if((rat2 == 1) || (rat2 == 7)){
		
				for(j=0;j<ketebalan;j++){
					printf(" ");
				}
				for(j=0;j<ketebalan;j++){
					printf(" ");
				}
				for(j=0;j<ketebalan;j++){
					printf(" ");
				}
				for(j=0;j<1;j++){
					printf(" ");
				}
			
			
		}else if((rat2 == 4)){
			
				for(j=0;j<ketebalan;j++){
					printf(" ");
				}
				for(j=0;j<ketebalan;j++){
					printf(" ");
				}
				for(j=0;j<ketebalan;j++){
					printf("0");
				}
				for(j=0;j<1;j++){
					printf(" ");
				}
			
					
		}
		
		
		if((pul2 == 0) || (pul2 == 2) || (pul2 == 3) || (pul2 == 5) || (pul2 == 6) || (pul2 == 8) || (pul2 == 9)) {

				for(j=0;j<ketebalan;j++){
					printf(" ");
				}
				for(j=0;j<ketebalan;j++){
					printf("0");
				}
				for(j=0;j<ketebalan;j++){
					printf(" ");
				}
				for(j=0;j<1;j++){
					printf(" ");
				}
			
		}	
		else if((pul2 == 1) || (pul2 == 7)){
		
				for(j=0;j<ketebalan;j++){
					printf(" ");
				}
				for(j=0;j<ketebalan;j++){
					printf(" ");
				}
				for(j=0;j<ketebalan;j++){
					printf(" ");
				}
				for(j=0;j<1;j++){
					printf(" ");
				}
			
			
		}else if((pul2 == 4)){
			
				for(j=0;j<ketebalan;j++){
					printf(" ");
				}
				for(j=0;j<ketebalan;j++){
					printf(" ");
				}
				for(j=0;j<ketebalan;j++){
					printf("0");
				}
				for(j=0;j<1;j++){
					printf(" ");
				}
			
					
		}
		
		
		if((sat2 == 0) || (sat2 == 2) || (sat2 == 3) || (sat2 == 5) || (sat2 == 6) || (sat2 == 8) || (sat2 == 9)) {

				for(j=0;j<ketebalan;j++){
					printf(" ");
				}
				for(j=0;j<ketebalan;j++){
					printf("0");
				}
				for(j=0;j<ketebalan;j++){
					printf(" ");
				}
				for(j=0;j<ketebalan;j++){
					printf(" ");
				}
				for(j=0;j<ketebalan;j++){
					printf(" ");
				}
				for(j=0;j<ketebalan;j++){
					printf(" ");
				}
			
		}	
		else if((sat2 == 1) || (sat2 == 7)){
		
				for(j=0;j<ketebalan;j++){
					printf(" ");
				}
				for(j=0;j<ketebalan;j++){
					printf(" ");
				}
				for(j=0;j<ketebalan;j++){
					printf(" ");
				}
				for(j=0;j<ketebalan;j++){
					printf(" ");
				}
				for(j=0;j<ketebalan;j++){
					printf(" ");
				}
				for(j=0;j<ketebalan;j++){
					printf(" ");
				}
			
		}else if((sat2 == 4)){
			
				for(j=0;j<ketebalan;j++){
					printf(" ");
				}
				for(j=0;j<ketebalan;j++){
					printf(" ");
				}
				for(j=0;j<ketebalan;j++){
					printf("0");
				}
				for(j=0;j<ketebalan;j++){
					printf(" ");
				}
				for(j=0;j<ketebalan;j++){
					printf(" ");
				}
				for(j=0;j<ketebalan;j++){
					printf(" ");
				}
			
		}
		
	}
	
	
	if(angk2>=10 && angk2<100){ //JIKA ANGKA KEDUA ADALAH PULUHAN
		
		if((pul2 == 0) || (pul2 == 2) || (pul2 == 3) || (pul2 == 5) || (pul2 == 6) || (pul2 == 8) || (pul2 == 9)) {

				for(j=0;j<ketebalan;j++){
					printf(" ");
				}
				for(j=0;j<ketebalan;j++){
					printf("0");
				}
				for(j=0;j<ketebalan;j++){
					printf(" ");
				}
				for(j=0;j<1;j++){
					printf(" ");
				}
			
		}	
		else if((pul2 == 1) || (pul2 == 7)){
		
				for(j=0;j<ketebalan;j++){
					printf(" ");
				}
				for(j=0;j<ketebalan;j++){
					printf(" ");
				}
				for(j=0;j<ketebalan;j++){
					printf(" ");
				}
				for(j=0;j<1;j++){
					printf(" ");
				}
			
			
		}else if((pul2 == 4)){
			
				for(j=0;j<ketebalan;j++){
					printf(" ");
				}
				for(j=0;j<ketebalan;j++){
					printf(" ");
				}
				for(j=0;j<ketebalan;j++){
					printf("0");
				}
				for(j=0;j<1;j++){
					printf(" ");
				}
			
					
		}
		
		
		if((sat2 == 0) || (sat2 == 2) || (sat2 == 3) || (sat2 == 5) || (sat2 == 6) || (sat2 == 8) || (sat2 == 9)) {

				for(j=0;j<ketebalan;j++){
					printf(" ");
				}
				for(j=0;j<ketebalan;j++){
					printf("0");
				}
				for(j=0;j<ketebalan;j++){
					printf(" ");
				}
				for(j=0;j<ketebalan;j++){
					printf(" ");
				}
				for(j=0;j<ketebalan;j++){
					printf(" ");
				}
				for(j=0;j<ketebalan;j++){
					printf(" ");
				}
			
		}	
		else if((sat2 == 1) || (sat2 == 7)){
		
				for(j=0;j<ketebalan;j++){
					printf(" ");
				}
				for(j=0;j<ketebalan;j++){
					printf(" ");
				}
				for(j=0;j<ketebalan;j++){
					printf(" ");
				}
				for(j=0;j<ketebalan;j++){
					printf(" ");
				}
				for(j=0;j<ketebalan;j++){
					printf(" ");
				}
				for(j=0;j<ketebalan;j++){
					printf(" ");
				}
			
			
		}else if((sat2 == 4)){
			
				for(j=0;j<ketebalan;j++){
					printf(" ");
				}
				for(j=0;j<ketebalan;j++){
					printf(" ");
				}
				for(j=0;j<ketebalan;j++){
					printf("0");
				}
				for(j=0;j<ketebalan;j++){
					printf(" ");
				}
				for(j=0;j<ketebalan;j++){
					printf(" ");
				}
				for(j=0;j<ketebalan;j++){
					printf(" ");
				}
			
		}
		
	}
	
	if(angk2>=1 && angk2<10){ //JIKA ANGKA KEDUA ADALAH SATUAN
				
		
		if((sat2 == 0) || (sat2 == 2) || (sat2 == 3) || (sat2 == 5) || (sat2 == 6) || (sat2 == 8) || (sat2 == 9)) {

				for(j=0;j<ketebalan;j++){
					printf(" ");
				}
				for(j=0;j<ketebalan;j++){
					printf("0");
				}
				for(j=0;j<ketebalan;j++){
					printf(" ");
				}
				for(j=0;j<ketebalan;j++){
					printf(" ");
				}
				for(j=0;j<ketebalan;j++){
					printf(" ");
				}
				for(j=0;j<ketebalan;j++){
					printf(" ");
				}
			
		}	
		else if((sat2 == 1) || (sat2 == 7)){
		
				for(j=0;j<ketebalan;j++){
					printf(" ");
				}
				for(j=0;j<ketebalan;j++){
					printf(" ");
				}
				for(j=0;j<ketebalan;j++){
					printf(" ");
				}
				for(j=0;j<ketebalan;j++){
					printf(" ");
				}
				for(j=0;j<ketebalan;j++){
					printf(" ");
				}
				for(j=0;j<ketebalan;j++){
					printf(" ");
				}
			
			
		}else if((sat2 == 4)){
			
				for(j=0;j<ketebalan;j++){
					printf(" ");
				}
				for(j=0;j<ketebalan;j++){
					printf(" ");
				}
				for(j=0;j<ketebalan;j++){
					printf("0");
				}
				for(j=0;j<ketebalan;j++){
					printf(" ");
				}
				for(j=0;j<ketebalan;j++){
					printf(" ");
				}
				for(j=0;j<ketebalan;j++){
					printf(" ");
				}
			
		}
		
	}
	
	
	/*HASIL*/
	int hasil;
	/*PEMBERIAN NILAI HASIL*/
	if(strcmp(operasi, "tambah") == 0){
		hasil = angk1 + angk2;
	}else if(strcmp(operasi, "kali") == 0){
		hasil = angk1 * angk2;
	}else if(strcmp(operasi, "bagi") == 0){
		hasil = angk1 * angk2;
	}else if(strcmp(operasi, "kurang") == 0){
		hasil = angk1 - angk2;
	}
	/*PEMISAHAN HASIL*/
	int rathas = 0;
	int pulhas = 0;
	int sathas = 0;
	
	if(hasil>=100 && hasil<1000){
		rathas = hasil/100;
		pulhas = (hasil - rathas * 100) / 10;
		sathas = ( hasil - rathas * 100 - pulhas * 10);
	}else if(hasil>=10 && hasil<100){
		pulhas = hasil/10;
		sathas = hasil - pulhas*10;
	}else if(hasil>=0 && hasil<10){
		sathas = hasil;
	}
	/*PENAMPILAN OUTPUT HASIL*/
	if(hasil>=100 && hasil<1000){ //BILA HASIL ADALAH RATUSAN
		if((rathas == 0) || (rathas == 2) || (rathas == 3) || (rathas == 5) || (rathas == 6) || (rathas == 8) ||  (rathas == 9)) {

				for(j=0;j<ketebalan;j++){
					printf(" ");
				}
				for(j=0;j<ketebalan;j++){
					printf("0");
				}
				for(j=0;j<ketebalan;j++){
					printf(" ");
				}
				for(j=0;j<1;j++){
					printf(" ");
				}
			
		}	
		else if((rathas == 1) || (rathas == 7)){
		
				for(j=0;j<ketebalan;j++){
					printf(" ");
				}
				for(j=0;j<ketebalan;j++){
					printf(" ");
				}
				for(j=0;j<ketebalan;j++){
					printf(" ");
				}
				for(j=0;j<1;j++){
					printf(" ");
				}
			
			
		}else if((rathas == 4)){
			
				for(j=0;j<ketebalan;j++){
					printf(" ");
				}
				for(j=0;j<ketebalan;j++){
					printf(" ");
				}
				for(j=0;j<ketebalan;j++){
					printf("0");
				}
				for(j=0;j<1;j++){
					printf(" ");
				}
			
					
		}
		
		
		if((pulhas == 0) || (pulhas == 2) || (pulhas == 3) || (pulhas == 5) || (pulhas == 6) || (pulhas == 8) || (pulhas == 9)) {

				for(j=0;j<ketebalan;j++){
					printf(" ");
				}
				for(j=0;j<ketebalan;j++){
					printf("0");
				}
				for(j=0;j<ketebalan;j++){
					printf(" ");
				}
				for(j=0;j<1;j++){
					printf(" ");
				}
			
		}	
		else if((pulhas == 1) || (pulhas == 7)){
		
				for(j=0;j<ketebalan;j++){
					printf(" ");
				}
				for(j=0;j<ketebalan;j++){
					printf(" ");
				}
				for(j=0;j<ketebalan;j++){
					printf(" ");
				}
				for(j=0;j<1;j++){
					printf(" ");
				}
			
			
		}else if((pulhas == 4)){
			
				for(j=0;j<ketebalan;j++){
					printf(" ");
				}
				for(j=0;j<ketebalan;j++){
					printf(" ");
				}
				for(j=0;j<ketebalan;j++){
					printf("0");
				}
				for(j=0;j<1;j++){
					printf(" ");
				}
			
					
		}
		
		
		if((sathas == 0) || (sathas == 2) || (sathas == 3) || (sathas == 5) || (sathas == 6) || (sathas == 8) ||  (sathas == 9)) {

				for(j=0;j<ketebalan;j++){
					printf(" ");
				}
				for(j=0;j<ketebalan;j++){
					printf("0");
				}
				for(j=0;j<ketebalan;j++){
					printf(" ");
				}
				for(j=0;j<ketebalan;j++){
					printf(" ");
				}
			
		}	
		else if((sathas == 1) || (sathas == 7)){
		
				for(j=0;j<ketebalan;j++){
					printf(" ");
				}
				for(j=0;j<ketebalan;j++){
					printf(" ");
				}
				for(j=0;j<ketebalan;j++){
					printf(" ");
				}
				for(j=0;j<ketebalan;j++){
					printf(" ");
				}
			
			
		}else if((sathas == 4)){
			
				for(j=0;j<ketebalan;j++){
					printf(" ");
				}
				for(j=0;j<ketebalan;j++){
					printf(" ");
				}
				for(j=0;j<ketebalan;j++){
					printf("0");
				}
				for(j=0;j<ketebalan;j++){
					printf(" ");
				}
			
		}
		printf("\n");
	}
	
	
	if(hasil>=10 && hasil<100){ //BILA HASIL ADALAH PULUHAN
		
		if((pulhas == 0) || (pulhas == 2) || (pulhas == 3) || (pulhas == 5) || (pulhas == 6) || (pulhas == 8) || (pulhas == 9)) {

				for(j=0;j<ketebalan;j++){
					printf(" ");
				}
				for(j=0;j<ketebalan;j++){
					printf("0");
				}
				for(j=0;j<ketebalan;j++){
					printf(" ");
				}
				for(j=0;j<1;j++){
					printf(" ");
				}
			
		}	
		else if((pulhas == 1) || (pulhas == 7)){
		
				for(j=0;j<ketebalan;j++){
					printf(" ");
				}
				for(j=0;j<ketebalan;j++){
					printf(" ");
				}
				for(j=0;j<ketebalan;j++){
					printf(" ");
				}
				for(j=0;j<1;j++){
					printf(" ");
				}
			
			
		}else if((pulhas == 4)){
			
				for(j=0;j<ketebalan;j++){
					printf(" ");
				}
				for(j=0;j<ketebalan;j++){
					printf(" ");
				}
				for(j=0;j<ketebalan;j++){
					printf("0");
				}
				for(j=0;j<1;j++){
					printf(" ");
				}
			
					
		}
		
		
		if((sathas == 0) || (sathas == 2) || (sathas == 3) || (sathas == 5) || (sathas == 6) || (sathas == 8) || (sat2 == 9)) {

				for(j=0;j<ketebalan;j++){
					printf(" ");
				}
				for(j=0;j<ketebalan;j++){
					printf("0");
				}
				for(j=0;j<ketebalan;j++){
					printf(" ");
				}
				for(j=0;j<ketebalan;j++){
					printf(" ");
				}
			
		}	
		else if((sathas == 1) || (sathas == 7)){
		
				for(j=0;j<ketebalan;j++){
					printf(" ");
				}
				for(j=0;j<ketebalan;j++){
					printf(" ");
				}
				for(j=0;j<ketebalan;j++){
					printf(" ");
				}
				for(j=0;j<ketebalan;j++){
					printf(" ");
				}
			
			
		}else if((sathas == 4)){
			
				for(j=0;j<ketebalan;j++){
					printf(" ");
				}
				for(j=0;j<ketebalan;j++){
					printf(" ");
				}
				for(j=0;j<ketebalan;j++){
					printf("0");
				}
				for(j=0;j<ketebalan;j++){
					printf(" ");
				}
			
		}
		printf("\n");
	}
	
	if(hasil>=1 && hasil<10){ //BILA HASIL ADALAH SATUAN
				
		
		if((sathas == 0) || (sathas == 2) || (sathas == 3) || (sathas == 5) || (sathas == 6) || (sathas == 8) || (sathas == 9)) {

				for(j=0;j<ketebalan;j++){
					printf(" ");
				}
				for(j=0;j<ketebalan;j++){
					printf("0");
				}
				for(j=0;j<ketebalan;j++){
					printf(" ");
				}
				for(j=0;j<ketebalan;j++){
					printf(" ");
				}
			
		}	
		else if((sathas == 1) || (sathas == 7)){
		
				for(j=0;j<ketebalan;j++){
					printf(" ");
				}
				for(j=0;j<ketebalan;j++){
					printf(" ");
				}
				for(j=0;j<ketebalan;j++){
					printf(" ");
				}
				for(j=0;j<ketebalan;j++){
					printf(" ");
				}
			
			
		}else if((sathas == 4)){
			
				for(j=0;j<ketebalan;j++){
					printf(" ");
				}
				for(j=0;j<ketebalan;j++){
					printf(" ");
				}
				for(j=0;j<ketebalan;j++){
					printf("0");
				}
				for(j=0;j<ketebalan;j++){
					printf(" ");
				}
			
		}
		printf("\n");
	}		
}
