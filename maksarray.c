#include <stdio.h>


int main(){
	int n;
	scanf("%d", &n);
	int tabInt[n];
	int i;
	for(i=0; i < n; i++){
		scanf("%d", &tabInt[i]);
	}
	
	int maksimal = tabInt[0];
	for(i=1; i < n; i++){
		if(maksimal < tabInt[i]){
			maksimal = tabInt[0];
		}
	}
	printf("nilai maksimal: %d\n", maksimal);
	
	return 0;
}