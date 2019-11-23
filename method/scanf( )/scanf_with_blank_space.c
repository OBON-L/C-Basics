#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main(void) {
	char str[1001];
	int n = 0;
	scanf("%[^\n]s", str);

	char* blank = strchr(str, ' ');
	while (blank != NULL) {
		n += 1;
		blank = strchr(blank + 1, ' ');
	}
	printf("%d", n);

	return 0;
}