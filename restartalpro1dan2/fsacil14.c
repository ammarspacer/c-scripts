#include <stdio.h>

int main(){
	
	float float1;
	float float2;
	float float3;
	int depan1,belakang1;
	int depan2,belakang2;
	int depan3,belakang3;
	int bil1;
	int bil2;
	int bil3;
	
	scanf("%f", &float1);
	scanf("%f", &float2);
	scanf("%f", &float3);
	
	scanf("%d", &bil1);
	scanf("%d", &bil2);
	scanf("%d", &bil3);
	
	depan1 = float1;
	belakang1 = (float1 - depan1) * 100;
	
	depan2 = float2;
	belakang2 = (float2 - depan2) * 100;
	
	depan3 = float3;
	belakang3 = (float3 - depan3) * 100;
	
	
	
	
	int status1 = 0;
	int status2 = 0;
	int status3 = 0;
	
	if(((depan1 % bil1 == 0) || (depan1 % bil2 == 0) || (depan1 % bil3 == 0)) && ((belakang1 % bil1 == 0) || (belakang1 % bil2 == 0) || (belakang1 % bil3 == 0)) ){
		status1 = 1;
	}else{
		status1 = 0;
	}
	
	if(((depan2 % bil1 == 0) || (depan2 % bil2 == 0) || (depan2 % bil3 == 0)) && ((belakang2 % bil1 == 0) || (belakang2 % bil2 == 0) || (belakang2 % bil3 == 0)) ){
		status2 = 1;
	}else{
		status2 = 0;
	}
	
	if(((depan3 % bil1 == 0) || (depan3 % bil2 == 0) || (depan3 % bil3 == 0)) && ((belakang3 % bil1 == 0) || (belakang3 % bil2 == 0) || (belakang3 % bil3 == 0)) ){
		status3 = 1;
	}else{
		status3 = 0;
	}

	
		
	
	
	int statusultra = 0;
	
	if(((status1 == 1) && (status2 == 1) && (status3 == 0)) || ((status1 == 1) &&(status2 == 0) && (status3 == 1)) || ((status1 == 0) &&(status2 == 1) && (status3 == 1))
		||((status1 == 1) && (status2 == 1) && (status3 == 1) )){
		statusultra = 1;
	}else {
		statusultra = 0;
	}
	
	if(statusultra == 1){
		printf("valid\n");
	}else if(statusultra == 0){
		printf("tidak valid\n");
	}
	
	
	return 0;
}

/*(fsacil14) Float Integer Besar Kecil


Pembuat Soal: Rosa A. S.

Batas Waktu Eksekusi	5 Detik
Batas Memori	1 MB

Diberikan 3 buah float besar dan 3 buah integer kecil. Periksa apakah ada 2 bilangan float besar yang angka di depan koma dan di belakang koma menjadi kelipatan dari sebuah angka integer besar.

Format Masukan:

3 float besar
3 integer kecil

Format Keluaran:

valid atau tidak valid

Contoh Masukan

33.22
44.55
23.23
11
12
13


Contoh Keluaran

valid

Contoh Masukan 2

33.23
44.55
23.23
11
12
13


Contoh Keluaran 2

tidak valid

       
*/