#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main(void) {
	char str[1001];
	scanf("%[^\n]s", str);
	int cnt = 0;
	char* ptr = strtok(str, " .,");

	while (ptr != NULL) {
		if (strcmp(ptr, "the") == 0) cnt++;
		ptr = strtok(NULL, " .,");
	}
	printf("%d", cnt);

	return 0;
}