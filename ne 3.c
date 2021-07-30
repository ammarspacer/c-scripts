#include <stdio.h>
#include <string.h>

int main(){
	//banyaknya string
	int n;
	//iterasi 
	int i,j;
	//penanda
	int ketemu = 0;
	//meminta input banyak string
	scanf("%d", &n);
	//array of string
	char nama[n][50];
	//meminta input string
	for(i=0 ; i<n ; i+=1){
		scanf("%s", &nama[i]);
	}
	//akan terus mengecek selama belum ditemukan
	//dan i lebih kecil dari n 
	i = 0;
	while(ketemu==0 && i<n){
		if(strcmp(nama[i],"penjahat")==0){
			ketemu=1
		}
	}
	
	
	
	
}