#include <stdio.h>

int main(void) {
	int a, b;
	if (!scanf("%d", &a)) return 1;
	if (!scanf("%d", &b)) return 1;
	printf("%d\n", a + b);
    return 0;
}
