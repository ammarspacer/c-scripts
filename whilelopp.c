int main() {
4 int i;
5 int n;
6 int status = 0; // inisialisasi variabel status bernilai 0
7
8 printf("Masukkan banyaknya bilangan: ");
9 scanf("%d", &n); // banyaknya bilangan yang akan dimasukkan
10 int arr[n];
11
12 for (i = 0; i < n; i++) {
13 printf("Masukkan bilangan ke %d: ", i + 1);
14 scanf("%d", &arr[i]);
15 }
16
17 // mulai mencari apakah ada bilangan genap di array atau tidak
18 i = 0;
19 while (i < n && status == 0) { // berjalan selama i < n dan satus == 0
20 if (arr[i % 2 == 0]) {
21 status = 1;
22 }
23 i++;
24 }
25
26 // jika ada bilangan genap tampilkan valid, jika tidak ada tampilkan
27 // tidak valid
28 if (status == 1) {
29 printf("valid\n");
30 } else {
31 printf("tidak valid\n");
32 }
33
34 return 0;
35 }