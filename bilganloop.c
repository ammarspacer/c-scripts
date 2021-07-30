#include <stdio.h>




int main() {
 int i;
 int n;
 int status = 0; // inisialisasi variabel status bernilai 0

 printf("Masukkan banyaknya bilangan: ");
 scanf("%d", &n); // banyaknya bilangan yang akan dimasukkan
 int arr[n];

 for (i = 0; i < n; i++) {
 printf("Masukkan bilangan ke %d: ", i + 1);
 scanf("%d", &arr[i]);
 }

 // mulai mencari apakah ada bilangan genap di array atau tidak
 i = 0;
 while (i < n && status == 0) { // berjalan selama i < n dan satus == 0
 if (arr[i] % 2 == 0) {
 status = 1;
 }
 i++;
 }

 // jika ada bilangan genap tampilkan valid, jika tidak ada tampilkan
 // tidak valid
 if (status == 1) {
 printf("valid\n");
 } else {
 printf("tidak valid\n");
 }

 return 0;
 }