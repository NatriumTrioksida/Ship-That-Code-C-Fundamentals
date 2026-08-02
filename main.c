#include <stdio.h>

int main(void) {
	int a[5];
	for (int i = 0; i < 5; i++) {
		if(!scanf("%d", &a[i])) return 1;
	}

	int largest = a[0];
	for (int i = 0; i < 5; i++) {
		if (a[i] > largest) {
			largest = a[i];
		}
	}
	printf("%d\n", largest);
    return 0;
}
