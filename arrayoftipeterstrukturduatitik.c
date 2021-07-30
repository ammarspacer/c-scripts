#include <stdio.h>
typedef struct{
	int x;
	int y;
}titik;

int main(){
	int n, i, gan = 0, gen = 0;
	scanf("%d", &n);
	titik ikatan_titik[n];
	for(i=0;i<n;i++){
		scanf("%d", &ikatan_titik[i].x);
		scanf("%d", &ikatan_titik[i].y);
	}
	for(i=0;i<n;i++){
		if((ikatan_titik[i].x % 2 != 0) && (ikatan_titik[i].y > ikatan_titik[i].x){
			printf("%d %d", ikatan_titik[i].x, ikatan_titik[i].x);
		}
	}
	
}