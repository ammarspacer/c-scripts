#include <stdio.h>

int main(){
	int i;
	int m;
	scanf("%d", &m);
	
	
	int array1[m];
	
	for(i = 0; i < m; i++){	
		scanf("%d", &array1[i]);
	}
	
	int n;
	scanf("%d", &n);
	int array2[n];
	printf("\n");
	
	for(i = 0; i < n; i++){	
		scanf("%d", &array2[i]);
	}
	
	int sum1=0, sum2=0;
	for(i = 0; i < (m/2); i++){
		sum1 = sum1 + array1[m];
	}
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	return 0;
}