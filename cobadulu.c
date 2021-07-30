#include <stdio.h>
typedef struct{
	int q; //-----> kualitas
	int d; //-----> diskon
	int p;//-----> harga setelah  diskon
	int lolos;//-----> lulus syarat
}gunpla;

int main(){
	//INPUT
	
	gunpla input[50];//array inputan
	int i = 0; //Untuk for
	int n = 0; //Untuk jumlah masukan dan var di while dan for
	scanf("%d", &input[n].q);
	while(input[n].q != 0){
		scanf("%d", &input[n].q);
		scanf("%d", &input[n].d); //input diskon
		scanf("%d", &input[n].p); //input harga setelah diskon
		n++; //iterasi
	}
	

	char y; //variabel D/C
	
	
	scanf(" %c", &y); // D/C


	int z; //Duit
	scanf("%d", &z); //Duit

	input[n].lolos = 0; //Variabel untuk mengecek uangpiyu bisa bayar
	
	for(i=0;i< n - 1;i++){
		if(z >= input[n].d ){//Mengecek uang Piyu
				input[n].lolos = 1; //jika uangpiyu bisa bayar
		}else if(z < input[n].d ){
				input[n].lolos = 0; //jika piyu gagal bayar
		}
	}
	
	return 0;
}