#include "mesin.c"

int main(){
	int i;
	
	//Persegi 
	int n;
	
	scanf("%d", &n);
	
	int panjang, lebar;
	float hasilP[n];
	
	for (i=0;i<n;i++){
		scanf("%d %d", &panjang, &lebar);
		hasilP[i] = getluas(panjang, lebar);
	}
	
	
	//Segitiga
	int m;
	scanf("%d", &m);
	
	int alas,tinggi;
	float hasilS[m];
	
	for (i=0;i<n;i++){
		scanf("%d %d", &alas, &tinggi);
		hasilS[i] = getluas(alas/2, lebar);
	}
	
	//Output
	printf("PERSEGI PANJANG\n");
	printf("------------------\n");
	for (i=0;i<n;i++){
		printf("%.2f\n", hasilP[i]);
	}
	
	printf("\n");
	
	printf("SEGITIGA\n");
	printf("------------------\n");
	for (i=0;i<n;i++){
		printf("%.2f\n", hasilS[i]);
	}
	
	
	
	return 0;
}



