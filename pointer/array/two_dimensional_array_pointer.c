#include <stdio.h>
int main()
{
	int arr[3][4] = {  
		{ 1, 2, 3, 4 },
		{ 5, 6, 7, 8 },
		{ 9, 10, 11, 12 }
	};

	int(*ptr)[4] = arr;

	printf("ptr: %d\n", ptr); // 15727020

	printf("*ptr: %d\n", *ptr); // 15727020

	printf("ptr + 1: %d\n", ptr+1); // 15727036

	printf("*(*(ptr + 1)+1): %d\n", *(*(ptr + 1)+1)); // 6

	printf("*(*ptr + 6): %d\n", *(*ptr+6)); // 15727024

	printf("**(ptr + 1): %d\n", **(ptr + 1)); // 5

	printf("*(*ptr + 1): %d\n", *(*ptr + 1)); // 2

	printf("**ptr: %d\n", **ptr); // 1
	
	return 0;
}