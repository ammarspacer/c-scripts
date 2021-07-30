#include <stdio.h>
#include <string.h>

int main(){
	int n;
	scanf("%d", &n);
	char strn[n][79];
	int i,j,k;
	int spasi =0;
	int spasi2 = 0;
	int gnp = 0;
	int gjl = 0;
	
	for(i=0;i<n;i++){
		scanf("%s", &strn[i]);
	}
	
	for(i=0;i<n;i++){
		if(i % 2 == 0){
			for(j=0;j<strlen(strn[i]);j++){
				for(k=0;k<spasi;k++){
					printf("_");
				}
			}
		}
		printf("\n");
	}
	
	
	
	
	return 0;
}