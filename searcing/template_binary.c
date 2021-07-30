#include <stdio.h>
void(int n,int search,passenger *sit){
	int i,j;
	int k;
	int ketemu;
	i=0;
	j=n;
	
	bil_cari = search;
	ketemu = 0;
	
	while((ketemu == 0) && (i<=j)){
		k = (int)(i+j)/2;
		if(sit[k].number == bil_cari){
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
		for(i=k;i<k+1;i++){
			printf("%d %s %s\n", seat[i].number, seat[i].name, seat[i].description);
		}	
	}else{
		printf("%d not-found\n", bil_cari);
	}
	
}



