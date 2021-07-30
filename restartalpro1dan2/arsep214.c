#include <stdio.h>

int main(){
	int n;
	scanf("%d", &n);
	int number1[n];
	int i;
	for(i=0;i<n;i++){
		scanf("%d", &number1[i]);
	}
	
	int m;
	scanf("%d", &m);
	int number2[m];
	
	for(i=0;i<m;i++){
		scanf("%d", &number2[i]);
	}
	
	int setengaharraydepannumber1[50];
	
	for(i=0;i<n/2;i++){
		setengaharraydepannumber1[i] = number1[i];
	}
	int setengaharraybelakangnumber2[50];
	for(i=m/2;i<m;i++){
		setengaharraybelakangnumber2[i] = number2[i];
	}
	
	
	int sum1 = 0;
	for(i=0;i<n/2;i++){
		sum1 = sum1 + setengaharraydepannumber1[i];
	}
	
	int sum2 = 0;
	
	for(i=m/2;i<m;i++){
		sum2 = sum2 + setengaharraybelakangnumber2[i];
	}
	
	if(sum1 == sum2){
		printf("valid\n");
	}else{
		printf("tidak valid\n");
	}
	return 0;
}