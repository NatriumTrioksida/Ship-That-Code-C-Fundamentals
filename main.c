#include <stdio.h>

int main(void) {
  int n;
  if (!scanf("%d", &n)) {
    return 1;
  };
  long long total = 0;
  for (int i = 1; i <= n; i++) {
    total += i;
  }
  printf("%lld\n", total);
  return 0;
}
