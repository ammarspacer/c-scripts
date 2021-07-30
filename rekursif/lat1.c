#include <stdio.h>
void alphabet(int i) {
 if (i < 'z') {
 alphabet(i + 1);
}
printf("%c", i);
}

 int main(int argc, char const *argv[]) {
 alphabet('a');
 return 0;
 }