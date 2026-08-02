#include <stdio.h>

typedef struct {
  int x, y;
} Point;

int sqrDistance(Point a, Point b) {
  int x = b.x - a.x;
  int y = b.y - a.y;
  return (x * x) + (y * y);
}

int main(void) {
  Point a, b;
  if (!scanf("%d", &a.x)) {
    return 1;
  }
  if (!scanf("%d", &a.y)) {
    return 1;
  }
  if (!scanf("%d", &b.x)) {
    return 1;
  }
  if (!scanf("%d", &b.y)) {
    return 1;
  }
  printf("%d\n", sqrDistance(a, b));
  return 0;
}
