#include <stdio.h>
int* return_pointer() {
	int* n = malloc(sizeof(int));
	*n = 37;
	return n;
}

int main() {
	int* ptr;
	ptr = return_pointer();
	printf("%d\n", *ptr);
	free(ptr); //use free() even memory allocated by the other function.
		
	return 0;
}