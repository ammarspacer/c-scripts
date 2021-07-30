// #include "header.h"
#include "mesin.c"

int main(){

	int m;
	int n;
	int o;

	scanf("%d", &m);
	scanf("%d", &n);
	scanf("%d", &o);

	database a[m];
	database b[n];
	database c[o];

	database merge1[n+m];
	database merge2[n+m+o];

	int i;

	for(i = 0; i < m; i += 1){
		scanf("%d", &a[i].value1);
		scanf("%d", &a[i].value2);
		scanf("%d", &a[i].value3);
	}

	for(i = 0; i < n; i += 1){
		scanf("%d", &b[i].value1);
		scanf("%d", &b[i].value2);
		scanf("%d", &b[i].value3);
	}

	for(i = 0; i < o; i += 1){
		scanf("%d", &c[i].value1);
		scanf("%d", &c[i].value2);
		scanf("%d", &c[i].value3);
	}		


	char sorting[30];
	scanf("%s", sorting);

	// mengurutkan secara ascension

	if (strcmp(sorting, "quick") == 0){
		
		quickSort(0, m-1, m, a);
		quickSort(0, n-1, n, b);
		quickSort(0, o-1, o, c);

	}else if (strcmp(sorting, "insert") == 0){

		insertion(m, a);
		insertion(n, b);
		insertion(o, c);

	}else if (strcmp(sorting, "select") == 0){

		selection(m, a);
		selection(n, b);
		selection(o, c);

	}else if (strcmp(sorting, "bubble") == 0){

		bubble(m, a);
		bubble(n, b);
		bubble(o, c);

	}

	fusion(a, b, merge1, m, n);
	fusion(merge1, c, merge2, n+m, o);

	output(merge2, m+n+o);	

	printf("\n");

	return 0;

}