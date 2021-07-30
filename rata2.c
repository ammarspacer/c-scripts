#include <stdio.h>

int main(){
	int n, i, marks[100];
	printf("masukkan n:\n");
	scanf("%d", &n);
	int sum;
	for(i=0;i<n;i++){
		printf("Enter number %d:");
		scanf(%d, &marks[i]);
		sum += marks[i];
	}
	int average =sum/n;
	printf("Average marks : %d\n");
	return 0;
}