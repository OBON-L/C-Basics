#include <stdio.h>

int main(void) {
	int a[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	
	int* b = a; // variable a itself is the beginning address of the array, so there is no & before a
	printf("%d\n", b[2]);

	printf("%d\n", a); //address
	printf("%d\n", b); //address

	system("pause");
	return 0;
}