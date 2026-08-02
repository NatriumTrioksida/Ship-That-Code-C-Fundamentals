#include <stdio.h>

int main(void) {
  int n;
  if (scanf("%d", &n) == 0) {
    return 1;
  }
  if (n % 15 == 0) {
    printf("FizzBuzz\n");
  } else if (n % 3) {
    printf("Buzz\n");
  } else if (n % 5) {
    printf("Fizz\n");
  } else {
    printf("%d\n", n);
  }
  return 0;
}
