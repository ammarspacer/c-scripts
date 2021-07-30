// #include "header.h"
#include "mesin.c"

int main(){

	int m;
	int n;
	int o;

	scanf("%d", &m);
	int i;

	tabel a[m][20];
	
	for(i = 0; i < m; i += 1){
		scanf("%s", &a[i].nama);
		scanf("%s", &a[i].status);
		scanf("%d", &a[i].nilai);
	}
	
	scanf("%d", &n);
	tabel b[n][20];
	for(i = 0; i < n; i += 1){
		scanf("%s", &b[i].nama);
		scanf("%s", &b[i].status);
		scanf("%d", &b[i].nilai);
	}
	
	scanf("%d", &o);
	tabel c[o];
	for(i = 0; i < o; i += 1){
		scanf("%s", &c[i].nama);
		scanf("%s", &c[i].status);
		scanf("%d", &c[i].nilai);
	}
	
	
	
	char sorting[100];
	scanf("%s", sorting);
	// mengurutkan secara ascension

	if (strcmp(sorting, "select_*_from_1,2,3_order_by_status_desc_with_quick;") == 0){
		
		quickSort(0, m-1, m, a);
		quickSort(0, n-1, n, b);
		quickSort(0, o-1, o, c);

	}else if (strcmp(sorting, "select_*_from_1,2,3_order_by_nilai_asc_with_insertion;") == 0){

		insertion(m, a);
		insertion(n, b);
		insertion(o, c);

	}else if (strcmp(sorting, "select_*_from_1,2,3_order_by_nilai_asc_with_selection;") == 0){

		selection(m, a);
		selection(n, b);
		selection(o, c);

	}else if (strcmp(sorting, "select_*_from_1,2,3_order_by_nilai_asc_with_bubble;") == 0){

		bubble(m, a);
		bubble(n, b);
		bubble(o, c);

	}

	
	scanf("%s")
	
	tabel merge1[n+m];
	tabel merge2[n+m+o];
	
	fusion(a, b, merge1, m, n);
	fusion(merge1, c, merge2, n+m, o);

	output(merge2, m+n+o);	

	printf("\n");

	return 0;

}