#include <head.h>
//merging max
void mergemax(int max1[],int max2[],merge[20],int n1,int n2){
	int i = 0;
	int j = 0;
	int k = 0;
	int l = 0;
	
	while(i < n1 && j < n2){
		if((max1[i] <= max2[j]) {
			merge[k] = max1[i];
			i++;
			k++;
		}
		else{
			merge[k] = max2[j];
		}
		k++;
		j++;
	}
	
	while(i < n1){
		merge[k] = max1[i];
		i++;
		k++;
	}
	
	while(j < n2){
		merge[k] = max1[j];
		i++;
		k++;
	}
}

