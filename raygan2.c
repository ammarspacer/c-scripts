#include <stdio.h>

int main(){
	int array[100],i,num;
	printf("Masukkan jumlah aray yg diinginkan\n");
	
	scanf("%d", &num);
	
	printf("Masukkan inputan arraynya sayangku\n");
	for(i = 0; i < num; i++){
		scanf("%d", &array[i]);
	}
	printf("Even numbers in the array are - \n");
	
	for(i = 0; i < num; i++){
		if(array[i] % 2 == 0){cmd
			printf("%d \n", array[i]);
		}
	}
	
	printf("\n Odd numbers in the array are - \n");
	
	for(i = 0; i < num; i++){
		if(array[i] % 2 != 0){
			printf("%d \n", array[i]);
		}
	}
	
	
	return 0;
}