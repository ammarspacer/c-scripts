#include <stdio.h>
#include <string.h>

int main(){
	int angk1; //variabel untuk angka pertama
	int angk2;
	char operasi[50];
	int ketebalan;
	
	scanf("%d", &angk1); //meminta inputan angka pertama
	
	scanf("%d", &angk2); //meminta inputan angka pertama
	scanf("%s", &operasi);
	scanf("%d", &ketebalan);
	
	if(angk1 < 1000){
		int rat1, pul1, sat1;
		rat1 = angk1/100;
		pul1 = (angk1 - rat1 * 100) / 10;
		sat1 = ( angk1 - rat1 * 100 - pul1 * 10);
		
		printf("%d %d %d\n", rat1, pul1, sat1);
	}
	
	if(angk2 < 1000){
		int rat2, pul2, sat2;
		rat2 = angk2/100;
		pul2 = (angk2 - rat2 * 100) / 10;
		sat2 = ( angk2 - rat2 * 100 - pul2 * 10);
		
		printf("%d %d %d\n", rat2, pul2, sat2);
	}
	
	int hasil;
	
	
	
	
	
	
	
	
	return 0;
}


void baris1(int angk1, int ketebalan){
	int i,j;
	int sat1 = 0;
	int pul1 = 0;
	int rat1 = 0;
	
	if(angk1>=100 && angk1<1000){
		rat1 = angk1/100;
		pul1 = (angk1 - rat1 * 100) / 10;
		sat1 = ( angk1 - rat1 * 100 - pul1 * 10);
	}else if(angk1>=10 && angk1<100){
		pul1 = angk1/10;
		sat1 = angk1 - pul1*10;
	}else if(angk1>=0 && angk1<10){
		sat1 = angk1;
	}
	
	if(angk1>=100 && angk1<1000){
		if((rat1 = 2) || (rat1 = 3) || (rat1 = 6) || (rat1 = 8) || (rat1 = 9)) {
			for(i=0;i<ketebalan;i++){
				for(j=0;j<ketebalan;j++){
					printf("_");
				}
				for(j=0;j<ketebalan;j++){
					printf("0");
				}
				for(j=0;j<ketebalan;j++){
					printf("_");
				}
				printf("\n");
				}
			if((pul1 = 2) || (pul1 = 3) || (pul1 = 6) || (pul1 = 8) || (pul1 = 9)){
				for(i=0;i<ketebalan;i++){
					for(j=0;j<ketebalan;j++){
					printf("_");
					}
					for(j=0;j<ketebalan;j++){
					printf("0");
					}
					for(j=0;j<ketebalan;j++){
					printf("_");
					}
					printf("\n");
			
				}
			}else if((pul1= 1) || (pul = 4)){
				for(i=0;i<ketebalan;i++){
					for(j=0;j<ketebalan;j++){
					printf("_");
					}
					for(j=0;j<ketebalan;j++){
					printf("_");
					}
					for(j=0;j<ketebalan;j++){
					printf("_");
					}
					printf("\n");
			
				}
			}else if(pul1 = 7){
				for(i=0;i<ketebalan;i++){
					for(j=0;j<ketebalan;j++){
					printf("0");
					}
					for(j=0;j<ketebalan;j++){
					printf("0");
					}
					for(j=0;j<ketebalan;j++){
					printf("_");
					}
					printf("\n");
			
				}
			}
			
			}
		}  
		
		
		
		
	}
	
	
}