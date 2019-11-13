#include <stdio.h>

void function1() {
	printf("Hello\n");
}

void function2(int i) {
	printf("%d\n", i);
}

int function3(int n1, int n2) {
	return n1 + n2;
}

int main(void) {
	void(*ptr)() = function1; // name of function returns memory address of the function
	ptr();

	void(*ptr2)(int) = function2;
	ptr2(100);

	int(*ptr3)(int, int);
	ptr3 = function3;
	printf("%d\n", ptr3(10, 20));

	return 0;
}