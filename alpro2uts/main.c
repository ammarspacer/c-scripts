#include "head.h"



int main(){
	
	char sorting;
	scanf("%s", &sorting); //scan menu
	int n1;
	
	scanf("%d", &n1); 
	matriks arr1[n1];
	
	int i,j;
	int n_1 = 0;
	
	
	while(n_1 < n1){
		for(i=0;i<3;i++){
			for(j=0;j<3;j++){
				scanf("%d", &arr1[n_1].matrix[i][j]);
			}
		}
		arr1[n_1].max = arr1[n_1].matrix[0][0];
		
		for(i = 0; i < 3; i++){
			for(j=0;j<3;j++){
				if(arr1[n_1].matrix[i][j] > arr1[n_1].max){
					arr1[n_1].max = arr1[n_1].matrix[i][j];
				}
			}
		}
		
		n_1 = n_1 + 1;
	}
	
	int n2;
	scanf("%d", &n2);
	matriks arr2[n2];
	int n_2 = 0;
	
	while(n_2 < n2){
		for(i=0;i<3;i++){
			for(j=0;j<3;j++){
				scanf("%d", &arr2[n_2].matrix[i][j]);
			}
		}
		arr2[n_2].max = arr2[n_2].matrix[0][0];
		
		for(i = 0; i < 3; i++){
			for(j=0;j<3;j++){
				if(arr2[n_2].matrix[i][j] > arr2[n_2].max){
					arr2[n_2].max = arr2[n_2].matrix[i][j];
				}
			}
		}	
		n_2 = n_2 + 1;
	}
	
	int n3;
	scanf("%d", &n3);
	matriks arr3[n3];
	int n_3 = 0;
	
	while(n_3 < n3){
		for(i=0;i<3;i++){
			for(j=0;j<3;j++){
				scanf("%d", &arr3[n_3].matrix[i][j]);
			}
		}

		arr3[n_3].max = arr3[n_3].matrix[0][0];
		
		for(i = 0; i < 3; i++){
			for(j=0;j<3;j++){
				if(arr3[n_3].matrix[i][j] > arr3[n_3].max){
					arr3[n_3].max = arr2[n_3].matrix[i][j];
				}
			}
		}
		
		n_3 = n_3 + 1;
	}
	
	int merge1[20];
	
	mergemax(arr1[n1].max,arr2[n2].max,merge1,n1,n2);
	
	int merge2[20];
	
	mergemax(merge1,arr3[n3].max,merge2,n2,n3);
	
	int merge3[20];
	mergemax(merge1,merge2,merge3,n1,n3);
	
	for(i=0;i<3;i++){
		printf("%d\n", merge1[i]);
		printf("%d\n", merge2[i]);
		printf("%d\n", merge3[i]);
	}
	
	return 0;
}






