#include <stdio.h>
int main(){
	int baris, kolom, bintang, n;
	scanf("%d", &n);
	for(kolom=1;kolom<=n;kolom++){
		for(baris=1;baris<=(n-kolom);baris++){
			printf(" ");
		}
		for(bintang=1;bintang<=kolom;bintang++){
		printf("*");
		}
	printf("\n");
	}
	
    return 0;
}
