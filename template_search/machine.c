#include "head.h"

void search_sequential(mahasiswa ilkom[],int n,char cari_nim[]){
	int ketemu = 0;
	int a=0;
	//proses pencarian
	while((a<n) && (ketemu == 0)){
		if(strcmp(ilkom[a].nim,cari_nim) == 0){
			ketemu = 1;
		}else{
			a+=1;
		}
	}
	
	if(ketemu == 1){
		printf("---------Data Ditemukan------------\n");
		printf("%s\n",ilkom[a].nama);
		printf("%s\n",ilkom[a].nim);
		printf("%.2f\n",ilkom[a].nilai);
	}else{
		printf("BURHAN ALWAYS LOVE LINKLINK\n");
	}

	
}	


void binary_search(int n,int tabInt[],int bil_cari){
	int i;
	int j;
	int k;
	int ketemu;
	i=0;
	j=n-1;
	
	ketemu = 0;
	
	while((ketemu==0) && (i<=j)){
		k=(int)(i+j)/2;
		if(tabInt[k] == bil)
		
	}
	
	
	
}