#include "head.h"
/*Saya [AMMAR ASHSHIDDIQI] mengerjakan evaluasi [TUGAS PRAKTIKUM 3] dalam mata kuliah [ALGORITMA DAN PEMROGRAMAN 2] 
untuk keberkahanNya maka saya tidak melakukan kecurangan seperti yang telah dispesifikasikan. Aamiin.*/

int main(){
	int n; //jumlah menu
	scanf("%d", &n); //scan jumlah menu
	
	
	char makanan[n][50]; //array of string makanan
	int harga[n]; //array of integer harga
	int i; //iterasi
	
	for(i=0;i<n;i++){
		scanf("%s %d", &makanan[i], &harga[i]); //isi menu
	}
	
	char metode_pengurutan; //meminta metode pengurutan menu
	
	scanf(" %c", &metode_pengurutan); //meminta metode pengurutan menu

	int j;
	
	switch(metode_pengurutan){ //proses pengurutan
		case 'D': //descending dengan selection sort
			select(harga,n,makanan); //prosedur proses descending
			for(i=0; i<n; i++){ //menampilkan output
				printf("%s ",makanan[i]);
				/*for(j=0;j<5;j++){
					printf("_");
				}*/
				printf("%d\n",harga[i]);
			}
		break;
		case 'A': //ascending dengan insertion sort
			insert(harga,n,makanan);  //prosedur proses ascending
			for(i=0; i<n; i++){ //menampilkan output
				printf("%s ",makanan[i]);
				/*for(j=0;j<5;j++){
					printf("_");
				}*/
				printf("%d\n",harga[i]);
			}
		default:
		break;
	}
	/*if(metode_pengurutan == 'D'){
		select(harga,n,makanan);
		for(i=0; i<n; i++){
		printf("%s ",makanan[i]);
		printf("%d\n",harga[i]);
		}
	}*/
	
	return 0;
}


/*void insert(int harga[],int n,char makan[n][50]){
	int i,j;
	int min_indeks;
	int temp;
	char tem[50];

	for(i=0; i<n; i++){
		min_indeks=i;

		for(j=i+1; j<n; j++){
			if(harga[j]>harga[min_indeks]){
				min_indeks=j;
			}
		}
		temp=harga[min_indeks];
		strcpy(tem,makan[min_indeks]);
		harga[min_indeks] = harga[i];
		strcpy(makan[min_indeks],makan[i]);
		harga[i] = temp;
		strcpy(makan[i],tem);
	}
}*/