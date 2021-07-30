#include "head.h"


void ipbubblesort(char ip[][50],int X){
	int i; char temp[50]; int tukar;
	// char tem;
	do{
		tukar = 0; //inisialisasinilai tukar sebelum ada pertukaran di set false 
		//pengulangan dan memeriksa apakah ada pertukaran
		for(i=0;i<(X-1);i++){
			//jika ada nilai yang dipertukarkan
			if(ip[i][50] > ip[i+1][50]){
				/*menukar posisi elemen*/
				temp[50] = ip[i][50];
				//strcpy(tem,notifier[i]);
				ip[i][50] = ip[i+1][50];
				//strcpy(notifier[i],notifier[i+1]);
				ip[i+1][50] = temp[50];
				//strcpy(notifier[i+1], tem);
				tukar = 1;
			}
				
		}
	}while(tukar == 1);
	
}	



void ipquickSort(int l, int r, int n, char arr[][50]){

	int i, j;
	char temp[100];
	
	
	i = l;
	j = r;

	do{

		while((arr[i][50] > arr[r][50]) && (i <= j)){

			/*mencegah i berjalan terlalu jauh melewati batas j*/												// QUICK SORT

			i = i + 1;

		}

		while((arr[j][50] < arr[l][50]) && (i <= j)){

			/*mencegah i berjalan terlalu jauh melewati batas i*/

			j = j - 1;

		}

		if(i < j){
			
			temp[100] = arr[i][50];
	
			arr[i][50] = arr[j][50];
																		// QUICK SORT
			arr[j][50] = temp[100];
			
			i += 1;
			j -= 1;
		}		

	}while(i < j);

	// tulis();

	if(l < j){
		ipquickSort(l,j,n,arr);
	}
	
	if(i < r){
		ipquickSort(i,r,n,arr);
	}

}
