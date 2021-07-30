#include <stdio.h>

int main(){
	
	//deklarasi variabel
	int i,j;
	int n,m;//panjang dan lebar
	
	//input
	scanf("%d", &n);
	scanf("%d", &m);
	
		//pengulangan sebanyak lebar
		for(i=0;i<m;i++){
			
			//pengulangan sebanyak panjang
			for(j=0;j<n;j++){
				//Menampilkan karakter *
				printf("*");
			}
			
			//Membuat baris baru
			printf("\n");
		}
	
	return 0;
}