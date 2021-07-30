#include "header.h"

int main(int argc, char const *argv[]) {
  char pita[300];
  scanf("%299[^\n]s", pita);

  int jumlahKata = 0; // yang mengandung minimal dua buah underscore
                      //-- CATATAN: tidak berturut-turut
 
  STARTKATA(pita);

  GETKATAUNIK(&jumlahKata);

  while (EOPKATA(pita) == 0) {
    INCKATA(pita);

    GETKATAUNIK(&jumlahKata);
  }

  printf("%d\n", jumlahKata);

  return 0;
}
