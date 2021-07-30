#include <stdio.h>

int main(){
	int numbig1;
	int numbig2;
	int numbig3;
	int numsmall1;
	int numsmall2;
	int numsmall3;
	
	scanf("%d", &numbig1);
	scanf("%d", &numbig2);
	scanf("%d", &numbig3);
	scanf("%d", &numsmall1);
	scanf("%d", &numsmall2);	
	scanf("%d", &numsmall3);

	
	int status1 = 0;
	int status2 = 0;
	int status3 = 0;
	
	if((numbig1 % numsmall1 == 0) || (numbig1 % numsmall2 == 0) || (numbig1 % numsmall3 == 0)){
		status1 = 1;
	}else{
		status1 = 0;
	}
	
	if((numbig2 % numsmall1 == 0) || (numbig2 % numsmall2 == 0) || (numbig2 % numsmall3 == 0)){
		status2 = 1;
	}else{
		status2 = 0;
	}	
	
	if((numbig3 % numsmall1 == 0) || (numbig3 % numsmall2 == 0) || (numbig3 % numsmall3 == 0)){
		status3 = 1;
	}else{
		status3 = 0;
	}

	int statusultra = 0;
	
	if(((status1 == 1) && (status2 == 1) && (status3 == 0)) || ((status1 == 1) &&(status2 == 0) && (status3 == 1)) || ((status1 == 0) &&(status2 == 1) && (status3 == 1))
		||((status1 == 1) && (status2 == 1) && (status3 == 1) )){
		statusultra = 1;
	}else {
		statusultra = 0;
	}
	
	if(statusultra == 1){
		printf("valid\n");
	}else if(statusultra == 0){
		printf("tidak valid\n");
	}
	return 0;
}