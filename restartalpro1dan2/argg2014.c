#include <stdio.h>

int main(){
	int n;
	scanf("%d", &n);
	int arr1[n];
	int i;
	for(i=0;i<n;i++){
		scanf("%d", &arr1[i]);
	}
	/*int m;
	scanf("%d", &m);
	int arr2[m];
	int j;
	for(j=0;j<n;j++){
		scanf("%d", &arr2[j]);
	}*/
	int ganjil[10],genap[10];
	
	for(i=0;i<n;i++){
		if(arr1[i] % 2 == 0){
			genap[i] = i;
		}else{
			ganjil[i] = i;
		}
	}
	
	printf("%d\n", genap);
	
	return 0;
}

/*Diberikan 2 buah array integer. Periksa apakah array pertama dan array kedua adalah array yang sama letak ganjil dan genapnya. Jika ya maka tampilkan valid, jika tidak maka tampilkan tidak valid.
Format Masukan:

n, 0 < n < 20, banyaknya bilangan di array pertama
n baris angka isi dari array pertama
m, 0 < m < 20, banyaknya bilangan di array kedua
m baris angka isi dari array kedua

Format Keluaran:

valid atau tidak valid

Contoh Masukan

3
1
2
3
3
5
6
7


Contoh Keluaran

valid

Contoh Masukan 2

3
1
2
4
4
1
2
3
4


Contoh Keluaran 2

tidak valid

       
Contoh Masukan 3

3
1
2
4
3
11
12
13


Contoh Keluaran 3

tidak valid

*/