#include <stdio.h>

int main()
{
	int num = 37;
	int binary[20] = { 0, };
	int position = 0;
	
	while (1) {
		binary[position] = num % 2;
		num /= 2;

		if (num == 0) break;

		position++;
	}

	for (int i = position; i >= 0; i--) printf("%d", binary[i]);

	printf("\n%d", sizeof(binary) / sizeof(int)); // 20
	
	return 0;
}