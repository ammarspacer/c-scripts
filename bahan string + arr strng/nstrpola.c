#include <stdio.h>
#include <string.h>

int main() {
  int jumlah_masukan;
  scanf("%d", &jumlah_masukan);

  char masukan[jumlah_masukan][100];
  int i;
  for (i = 0; i < jumlah_masukan; i++) {
    scanf("%s", masukan[i]);
  }

  for (i = 0; i < jumlah_masukan; i++) {
    printf("%s\n", masukan[i]);
    
    if (i + 1 < jumlah_masukan) {
      int j;
      int tepi_bawah = strlen(masukan[i + 1]);
      for (j = 0; j < tepi_bawah; j++) {
      	if (j < strlen(masukan[i + 1])) {
        	printf("%c", masukan[i + 1][j]);
        } else {
        	printf("-");
        }

        if ((i + 2 < jumlah_masukan) && (j < strlen(masukan[i + 2]))) {
          int k;
          if (tepi_bawah < strlen(masukan[i + 2])) {
            tepi_bawah = strlen(masukan[i + 2]);
          }
          for (k = 0; k < strlen(masukan[i]) - 2; k++) {
            printf("-");
          }
          printf("%c", masukan[i + 2][j]);
        }
        printf("\n");
      }
    }

    if (i + 2 < jumlah_masukan) {
      i += 2;
    } else {
      i++;
    }
  }

  return 0;
}
