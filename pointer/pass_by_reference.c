#include <stdio.h>

void mul(int* n) {
	*n = *n * 2; // pass by reference: using pointer
}

int main(void) {
	int n = 5;
	mul(&n);
	printf("mul1: %d\n", n);

	mul(&n);
	printf("mul2: %d\n", n);
	
	return 0;
}