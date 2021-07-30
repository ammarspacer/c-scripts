#include <stdio.h>
#include <string.h>

int main ()
{
	int n;
	scanf ("%d", &n);
	
	char masukan[n][100];
	int i;
	
	for (i = 0; i < n; i += 1)
	{
		scanf ("%s", masukan[i]);		
	}
	
	int j, k, l = -1;
	for (i = 0; i < n; i += 1)
	{
		for (j = 0; j < l + 1; j += 1)
		{
			printf ("_");
		}
		for (j = 0; j < strlen(masukan[i]) / 2; j += 1)
		{
			printf ("%c", masukan[i][j]);
			l += 1;
		} 
		printf ("_");
		for (j = strlen(masukan[i]) / 2; j < strlen(masukan[i]); j += 1)
		{
			printf ("%c", masukan[i][j]);
		}
		i++;		
		printf ("\n");
		
		for (j = strlen(masukan[i]) - 1; j >= 0 ; j -= 1)
		{
			for (k = 0; k < l + 1; k += 1)
			{
				printf ("_");
			}
			printf ("%c\n", masukan[i][j]);
		}
	}
	
	return 0;
}
