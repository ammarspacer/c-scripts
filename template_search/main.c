//#include "head.h"
#include "machine.c"

int main(){
	int n;
	scanf("%d", &n);
	mahasiswa ilkom[n];
	int i;
	for(i=0;i<n;i++){
		scanf("%s", &ilkom[i].nama);
		scanf("%s", &ilkom[i].nim);
		scanf("%f", &ilkom[i].nilai);
	}
	
	char cari_nim[20];
	
	scanf("%s", &cari_nim);
	
	
	search_sequential(ilkom,n,cari_nim);
	
	
	
	
	
	return 0;
}