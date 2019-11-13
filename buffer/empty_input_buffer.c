#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	int n;
	char c;

	scanf("%d", &n);
	printf("%d\n", n);

	int temp;

	//Empty input buffer
	while ((temp = getchar()) != EOF && temp != '\n') { }
	//If EOF or '\n' is entered, escape while bacause that means the end of input buffer

	scanf("%c", &c);
	printf("%c\n", c);
	
	system("pause");
	return 0;
}