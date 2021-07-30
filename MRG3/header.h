#include <stdio.h>					// UNLOCK COMMAND printf and scanf
// #include <string.h>				// UNLOCK COMMAND strcpy, strcmp, strlen, dll
// #include <math.h>				// UNLOCK COMMAND pow, sqrt, dll
// #inclue <stdlib.h>				// UNLOCK COMMAND atoi, system, dll

typedef struct{

	char name;
	char status_hidup;						// value bisa diganti dengan tipe data apa saja, tergantung kebutuhanmu
	int nilai;
	// dst...

}database;

void output(database *merge, int total);
void insertion(int n, database *merge);
void selection(int n, database *merge);
void bubble(int n, database *merge);
void quickSort(int l, int r, int n, database *merge); // l = left pivot, r = Right Pivot! L = 0, R = n-1!
void fusion(database *a, database *b, database *merge, int n, int m);
