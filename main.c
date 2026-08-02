#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>

int main(void) {
  size_t size;
  if (!scanf("%ld", &size)) {
    return 1;
  }

  int *arr = malloc(size * sizeof(int));
  if (!arr) {
    return 1;
  }

  size_t read_fail = 0;
  for (int i = 0; i < size; i++) {
    if (!scanf("%d", &arr[i])) {
      read_fail = 1;
      break;
    }
  }
  if (read_fail) {
    free(arr);
    return 1;
  }

  long long sum = 0;
  for (int i = 0; i < size; i++) {
    sum += arr[i];
  }
  printf("%lld\n", sum);

  free(arr);
  return 0;
}
