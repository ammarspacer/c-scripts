#include <stdio.h>
#include <string.h>


int main(){
	int n;
	
	int skor;
	
	scanf("%d", &n);
	
	char nama[n][50];
	char keahlian[n][50];
	
	int i;
	
	for(i=0;i<n;i++){
		scanf(" %s", &nama[i]); scanf(" %c", &keahlian[i]);  scanf("%d", &skor);
	}
	
	
	
	return 0;
}