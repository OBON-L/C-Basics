#include <stdio.h>

int main(void){
	int* ptr[5] = { 1, 2, 3, 4, 5 };
	printf("%d\n", ptr); // prints out address
	for (int i = 0; i < 5; i++) {
		printf("%d\n", ptr[i]); // prints out values of the array
	}

	return 0;
}