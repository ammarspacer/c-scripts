#include <stdio.h>
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
		if((rat1 == 2) || (rat1 == 3) || (rat1 == 6) || (rat1 == 8) || (rat1 == 9)) {
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
		}	
		else if(rat1 == 7){
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
			
		}else{
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
					
		}
		
		
		if((pul1 == 0) || (pul1 == 2) || (pul1 == 3) || (pul1 == 6) || (pul1 == 8) || (pul1 == 9)) {
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
		}else if((pul1 == 1) || (pul1 == 4)){
			
			
			
			
			
			
			
			
			
			
			
			
			
			
			
			
			
			
			
			
			
			
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
		}else if(pul1 == 7){
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
		}else{
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
		}
		
		
		if((sat1 == 0) || (sat1 == 2) || (sat1 == 3) || (sat1 == 6) || (sat1 == 8) || (sat1 == 9)) {
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
		}else if((pul1 == 1) || (pul1 == 4)){
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
		}else if(pul1 == 7){
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





int main(){
	int angka1;
	int tebal;
	
	scanf("%d", &angka1);
	scanf("%d", &tebal);
	
	baris1(angka1,tebal);
	
	return 0;
}