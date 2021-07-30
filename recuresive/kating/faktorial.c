#include <stdio.h>

 int factorial(int num) {
 int res = 0;
 /**
 * BASIS
 */
 if (num == 0 || num == 1) {
 return 1;
 } else {
 res = num * factorial(num - 1); // proses rekursif
 return res;
 }
 }


 int main() {
 int num = 5;
 int fact = factorial(num);

 if (fact > 0) printf("\n The factorial of [%d] is [%d]\n", num, fact);


 return 0;
 }