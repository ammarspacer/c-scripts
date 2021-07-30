#include "head.h"

void select(int harga[],int n,char makan[n][50]){ //prosedur proses descending dengan selection sort
	int i,j; //iterasi
	int min_indeks; //penampung iterasi sementara
	int temp; //penyimpanan harga sementara
	char tem[50]; //penyimpanan makanan sementara

	for(i=0; i<n; i++){ //proses
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
}

void insert(int harga[],int n,char makan[n][50]){ //prosedur proses ascending dengan insertion sort
	int i,j; //iterasi
	int data_sisip;//penampung iterasi sementara
	char tem[50]; //penyimpanan makanan sementara
	for(i=1; i<n; i++){ //proses
		data_sisip = harga[i];
		strcpy(tem,makan[i]);
		j = i - 1;
		while((data_sisip < harga[j]) && (j >= 0)){
			harga[j+1] = harga[j];
			strcpy(makan[j+1],makan[j]);
			j = j - 1;
			
		}
		harga[j+1] = data_sisip;
		strcpy(makan[j+1],tem);
		//strcpy(tem,makan[min_indeks]);
		/*harga[min_indeks] = harga[i];
		strcpy(makan[min_indeks],makan[i]);
		harga[i] = temp;
		strcpy(makan[i],tem);*/
	}

}
