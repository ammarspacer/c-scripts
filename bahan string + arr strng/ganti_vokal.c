#include <stdio.h>
#include <string.h>

int main () {
	char masukan[100];
	int i;
	
	scanf ("%s", masukan);
	for (i = 0; i < strlen (masukan); i++) {
		if ((masukan[i] == 'a') || (masukan[i] == 'i') ||
			(masukan[i] == 'u') || (masukan[i] == 'e') ||
			(masukan[i] == 'o')) {
			printf ("%d", i % 10);
		} else
		printf ("%c", masukan[i]);
	}
	printf ("\n");

	return 0;
}
