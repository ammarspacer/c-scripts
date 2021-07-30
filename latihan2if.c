#include <stdio.h>

int main () {
  int vokal = 0, konsonan = 0;

  char ch1, ch2, ch3, ch4, ch5, ch6;
  scanf("%c %c %c %c %c %c", &ch1, &ch2, &ch3, &ch4, &ch5, &ch6);

  if (ch1 == 'a' || ch1 == 'i' || ch1 == 'u' || ch1 == 'e' || ch1 == 'o') {
    vokal++;
  } else {
    konsonan++;
  }

  if (ch2 == 'a' || ch2 == 'i' || ch2 == 'u' || ch2 == 'e' || ch2 == 'o') {
    vokal++;
  } else {
    konsonan++;
  }

  if (ch3 == 'a' || ch3 == 'i' || ch3 == 'u' || ch3 == 'e' || ch3 == 'o') {
    vokal++;
  } else {
    konsonan++;
  }

  if (ch4 == 'a' || ch4 == 'i' || ch4 == 'u' || ch4 == 'e' || ch4 == 'o') {
    vokal++;
  } else {
    konsonan++;
  }

  if (ch5 == 'a' || ch5 == 'i' || ch5 == 'u' || ch5 == 'e' || ch5 == 'o') {
    vokal++;
  } else {
    konsonan++;
  }

  if (ch6 == 'a' || ch6 == 'i' || ch6 == 'u' || ch6 == 'e' || ch6 == 'o') {
    vokal++;
  } else {
    konsonan++;
  }

  if (vokal == konsonan) {
    printf("valid\n");
  } else {
    printf("tidak valid\n");
  }

  return 0;
}