#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdbool.h>

int main()
{
	bool isPalindrome = true;
	char str[30];
	char str2[30] = { 0, }; // array to contain strings without blank spaces

	scanf("%[^\n]s", str);

	int length = strlen(str);
	int j = 0;
	for (int i = 0; i < length; i++) {
		if (str[i] == ' ') continue;
		str2[j] = str[i];
		j++;
	}

	int length2 = strlen(str2);
	for (int i = 0; i < length2 / 2; i++) {
		if (str2[i] != str2[length2 - 1 - i]) {
			isPalindrome = false;
			break;
		}
	}

	if (isPalindrome) printf("%d", isPalindrome);
	else printf("%d", isPalindrome);

	return 0;
}