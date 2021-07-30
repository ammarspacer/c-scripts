#include <stdio.h>

int main(){
	int n; 
	int angka;
	
	scanf("%d", &angka);
	scanf("%d", &n);

	angkarat(angka,n);angkapul(angka,n);angkasat(angka,n);	
	return 0;
}

void angkarat(int angka;int ketebalan){
int angka;
int ketebalan
if(angka < 1000){
		int ratusan, puluhan, satuan;
		ratusan = angka/100;
		puluhan = (angka - ratusan * 100) / 10;
		satuan = ( angka - ratusan * 100 - puluhan * 10);
		
	int i;
	int j;


	
	if((ratusan  == 0) || (ratusan == 2) || (ratusan == 3) || (ratusan == 5) || (ratusan == 8) || (ratusan == 9)){
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			printf("_");
		}
		for(j=0;j<n;j++){
			printf("*");
		}
		for(j=0;j<n;j++){
			printf("_");
		}
		printf("\n");
	}
}
}

}

void angkapul(int angka;int ketebalan){
if(angka < 1000){
		int ratusan, puluhan, satuan;
		ratusan = angka/100;
		puluhan = (angka - ratusan * 100) / 10;
		satuan = ( angka - ratusan * 100 - puluhan * 10);
		
	int i;
	int j;


	
	if((puluhan  == 0) || (puluhan == 2) || (puluhan == 3) || (puluhan == 5) || (puluhan == 8) || (puluhan == 9)){
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			printf("_");
		}
		for(j=0;j<n;j++){
			printf("*");
		}
		for(j=0;j<n;j++){
			printf("_");
		}
		printf("\n");
	}
}
}

}



void angkasat(int angka;int ketebalan){
if(angka < 1000){
		int ratusan, puluhan, satuan;
		ratusan = angka/100;
		puluhan = (angka - ratusan * 100) / 10;
		satuan = ( angka - ratusan * 100 - puluhan * 10);
		
	int i;
	int j;


	
	if((satuan  == 0) || (satuan == 2) || (satuan == 3) || (satuan == 5) || (satuan == 8) || (satuan == 9)){
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			printf("_");
		}
		for(j=0;j<n;j++){
			printf("*");
		}
		for(j=0;j<n;j++){
			printf("_");
		}
		printf("\n");
	}
}
}

}