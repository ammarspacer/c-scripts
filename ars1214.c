#include <stdio.h>
int main(){
	int m1;
	scanf("%d", &m1);
	int i;
	
	
	
	int array1[m1];
	
	for(i = 0; i < m1; i++){	
		scanf("%d", &array1[i]);
	}
	
	
	int min= array1[0] , max= array1[m1 / 2];
	
	for(i = 0; i < (m1 / 2); i++){
		if(min > array1[i]){
			printf("%c", ;
		}
	}
	for(i = m1 /2; i < m1; i++){
		if(max < array1[i]){
			max = array1[i];
		}
	}
	printf("%d\n", max);
	printf("%d\n", min);
	if(min == max){
		printf("valid\n");
		printf("%d", min);
	}else{
		printf("tidak valid\n");
		printf("%d\n", min);
		printf("%d\n", max);
	}
  return 0;
}