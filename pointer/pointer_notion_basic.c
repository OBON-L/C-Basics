#include <stdio.h>

int main(void) {
	int a = 5;
	//int* b = &a;
	int* b;
	b = &a;


	printf("address of a: %d\n\n", &a);

	printf("value of b: %d\n", b);
	printf("value of *b: %d\n", *b);
	printf("address of b: %d\n\n", &b);

	//int** c = &b;
	int** c;
	c = &b;
	printf("value of c: %d\n", c);
	printf("value of *c: %d\n", *c);
	printf("value of **c: %d\n", **c);

	system("pause");
	return 0;
}