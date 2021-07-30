#include <stdio.h>


int main(){
	int n;
	scanf("%d", &n);
	
	int arr[n];
	
	int i;
	for (i = 0; i < n; i++){
		scanf("%d", &arr[i]);
	}
	
		max = max[0];
	int indek_max = 0;
	
		min = min[0];
	int indek_min = 0;
	
	for (i = 1; i < n; i++){
		if(max < arr[i]){
			max = arr[i];
			indek_max = i;
		}
		
		if(min > arr[i]){
			min = arr[i];
			indek_min = i;
		}
		
	}
	
	return 0;
}