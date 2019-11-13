#include <stdio.h>

int main(void) {
	char* a = "Hello World"; // string literal
	char b[] = "Hello Wolrd";
	char* c = b;

	// printf() prints out string till the null when the beginning address of string(a, b, c) is delivered
	printf("a : %s\n", a);
	printf("b: %s\n", b);

	b[2] = 'A';
	
	//after change
	printf("b: %s\n", b);
	printf("c: %s\n", c);
	// error: printf("c: %s", *c);

	printf("%d", Hello World);

}