#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int num;
	scanf("%d", &num);
	int binary[20] = { 0, };
	int position = 0;
	
	// decimal to binary
	while (1) {
		binary[position] = num % 2;
		num /= 2;

		if (num == 0) break;

		position++;
	}
	printf("decimal to binary : ");
	for (int i = position; i >= 0; i--) printf("%d", binary[i]);

	//binary to decimal
	int decimal = 0;
	for (int i = 0; i <= position; i++)	decimal += binary[i] << i;

	printf("\nbinary to decimal: %d\n", decimal);

	return 0;
}
