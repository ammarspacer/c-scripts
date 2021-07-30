#include <stdio.h>

int main(){
	int n;
	
	scanf("%d", &n);
	
	int inangper[n];
	
	int i;
	
	for(i=0;i<n;i++){
		scanf("%d", &inangper[i]);
	}
	
	int m;
	
	scanf("%d", &m);
	
	int inangked[m];
	
	int j;
	
	for(j=0;j<m;j++){
		scanf("%d", &inangked[j]);
	}
	
	int setarray1[50];
	
	for(i=0; i < (n/2); i++){
		setarray1[i] =  inangper[i]; //proses  penampung set array 1
	}
	
	int setarray2[50];
	
	for(j= m/2; j <m ; j++){
		setarray2[j] = inangked[j]; //proses  penampung set array 2
	}
	
	for(i=0;i<n;i++){
		printf("%d\n", setarray1[i]);
	}
	
	for(j=0;j<m;j++){
		printf("%d\n", setarray2[j]);
	}
	return 0;
}