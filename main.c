#include <stdio.h>

int square(int);

int main(void) {
  int n;
  if (!scanf("%d", &n)) {
    return 1;
  };
  printf("%d\n", square(n));
  return 0;
}

int square(int n) {
	return n * n;
}
