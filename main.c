#include <stdio.h>
#include <string.h>

int main(void) {
	char str[100];
	if (fgets(str, sizeof str, stdin) == NULL) return 1;
	for (int i = 0; i < 100; i ++) {
		if (str[i] == '\n') {
			str[i] = '\0';
			break;
		}
	}
	printf("%zu\n", strlen(str));
    return 0;
}
