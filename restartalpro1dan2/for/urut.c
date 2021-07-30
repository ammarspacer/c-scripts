#include <stdio.h>

int main(){
	int pilihan;
	scanf("%d", &pilihan);
	
	int nilaiawal;
	int nilaiakhir;
	int iterasi;
	int i;
	if(pilihan == 1){
		scanf("%d %d", &nilaiawal, &nilaiakhir);
		scanf("%d", &iterasi);
		if(nilaiawal > nilaiakhir){
			printf("Maaf perulangan tidak dapat diproses!\n");
		}else if(nilaiawal < nilaiakhir){
			for(i=nilaiawal;i<nilaiakhir;i+=iterasi){
				printf("%d ", i);
			}
		}
	}else if(pilihan == 2){
		scanf("%d %d", &nilaiawal, &nilaiakhir);
		scanf("%d", &iterasi);
		if(nilaiawal < nilaiakhir){
			printf("Maaf perulangan tidak dapat diproses!\n");
		}else if(nilaiawal > nilaiakhir){
			for(i=nilaiawal;i>nilaiakhir;i-=iterasi){
				printf("%d ", i);
			}
		}
	}
	
	
	
	
	
	
	
	return 0;
} 