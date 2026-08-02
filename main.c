#include <stdio.h>
#include <string.h>

int main(void) {
	char str[100];
	if (!scanf("%99s", str)) return 1;
	for (int i = 0; i < 100; i ++) {
		if (str[i] == '\n') {
			str[i] = '\0';
			break;
		}
	}
	printf("%zu\n", strlen(str));
    return 0;
}
