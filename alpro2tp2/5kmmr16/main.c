#include "machine.c"

int main(){
	int x,y;
	
	scanf("%d %d", &x, &y);
	
	int matriks1[x][y];
	int matriks2[x][y];
	int matriks3[x][y];
	int parameter[x][y];
	
	int i,j;
	for(i=0;i<x;i++){
		for(j=0;j<y;j++){
			scanf("%d", &matriks1[i][j]);
		}
	}
	
	
	for(i=0;i<x;i++){
		for(j=0;j<y;j++){
			scanf("%d", &matriks2[i][j]);
		}
	}
	
	for(i=0;i<x;i++){
		for(j=0;j<y;j++){
			scanf("%d", &matriks3[i][j]);
		}
	}
	
	
	for(i=0;i<x;i++){
		for(j=0;j<y;j++){
			scanf("%d", &parameter[i][j]);
		}
	}
	
	return 0;
}