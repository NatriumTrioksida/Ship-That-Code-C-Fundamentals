#include <stdio.h>

void swap(int *a, int *b) {
	int tmp = *a;
	*a = *b;
	*b = tmp;
}

int main(void) {
  int a, b;
  if (!scanf("%d %d", &a, &b)) {
    return 1;
  };
  swap(&a, &b);
  printf("%d %d\n", a, b);
  return 0;
}
