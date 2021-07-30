#include <stdio.h>
#include <string.h>

int main(int argc, char const *argv[]) {
  char input1[100], input2[100];
  scanf("%s %s", input1, input2);

  int i;
  int consonant[2] = {0, 0};
  int vocal[2] = {0, 0};
  for (size_t i = 0; i < strlen(input1); i++) {
    if ((input1[i] >= 'a') && (input1[i] <= 'z')) {
      if ((input1[i] == 'a') || (input1[i] == 'i') ||
          (input1[i] == 'u') || (input1[i] == 'e') ||
          (input1[i] == 'o')) {
            vocal[0]++;
      } else consonant[0]++;
    }
  }
  for (size_t i = 0; i < strlen(input2); i++) {
    if ((input2[i] >= 'a') && (input2[i] <= 'z')) {
      if ((input2[i] == 'a') || (input2[i] == 'i') ||
          (input2[i] == 'u') || (input2[i] == 'e') ||
          (input2[i] == 'o')) {
            vocal[1]++;
      } else consonant[1]++;
    }
  }

  if (consonant[0] == consonant[1]) {
    printf("sama konsonan\n");
  } else if (vocal[0] == vocal[1]) {
    printf("sama vokal\n");
  } else
    printf("tidak ada yang sama\n");
    
  return 0;
}
