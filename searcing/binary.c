#include <stdio.h>

int main(){
	int tabInt[10] = {15,18,23,28,28,34,67,67,89,98};
	
	
	
	
	int i; int j; int bil_cari; int k; int ketemu;
	for(i=0;i<10;i++){
		printf("%d \n", tabInt[i]);
	}
	i=0;
	j=9;
	
	bil_cari = 89;
	ketemu = 0;
	
	while((ketemu == 0) && (i<=j)){
		k = (int)(i+j)/2;
		if(tabInt[k] == bil_cari){
			ketemu = 1;
		}else{
			if(tabInt[k] > bil_cari){
				j = k-1;
			}else{
				i= k+1;
			}
		}
	}
	
	if(ketemu == 1){
		printf("nilai %d ada pada tabel\n", bil_cari);
	}else{
		printf("EUWEUH!!!!\n");
	}
	
	return 0;
}