#include <stdio.h>
#include <string.h>

int main(){
	int  n, i, j;
	scanf("%d", &n);
	char arr[n][50];
	for(i=0;i<n;i++){
		scanf("%s", &arr[i]);
	}
	int space = 0;
	for(i=0;i<n;i++){
		for(j=0;j<space;j++){ //Pola spasi
			printf(" ");
		}
		space = space + strlen(arr[i]); //Agar spasi bertambah sejumlah panjang string
	printf("%s\n", arr[i]); //isi string
	}
	return 0;
}