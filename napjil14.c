#include <stdio.h>

int main(){
	int ganjil[3] = {0,0,0}; //wadah ganjil
	int genap[3] = {0,0,0}; //wadah genap
	int jumbilgen = 0; //jumlah bilangan genap
	int jumbilgan = 0; //jumlah bi*** -----> bilangan ganjil
	int i,j; //iterasi kuy
	int input[6]; //wadah inputan
	
	for(i=0;i<6;i++){
		scanf("%d", &input[i]);  //ngescan inputan
		
		if(input[i]%2 == 0){
			jumbilgen++; //mengecek jumlah bilangan genap
			if(genap[0] == 0){
				genap[0] = input[i];
			}else if(genap[1] == 0){
				genap[1] = input[i];
			}else if(genap[2] == 0){
				genap[2] = input[i];
			}
			// /\
			// ||
			// jika arraynya masih kosong maka isi
			// kalo misalnya arraynya udah ada yang isi
			// lanjut ke array selanjutnya
		}else{
			jumbilgan++; //mengecek jumlah bilangan genap
			if(ganjil[0] == 0){
				ganjil[0] = input[i];
			}else if(ganjil[1] == 0){
				ganjil[1] = input[i];
			}else if(ganjil[2] == 0){
				ganjil[2] = input[i];
			}
			// /\
			// ||
			// jika arraynya masih kosong maka isi
			// kalo misalnya arraynya udah ada yang isi
			// lanjut ke array selanjutnya
		}
		//ngeprint kuy
		//ngeprint kuy
		
		
	}
	
	if((jumbilgan == 3) && (jumbilgen == 3)){
			for(i=0;i<3;i++){
				printf("%d\n", genap[i]);
				printf("%d\n", ganjil[i]);
			}
	}else if(jumbilgan != 3){
		printf("tidak valid\n");	
	}
	
	
	return 0;
	//#createdby:BilganKW
}