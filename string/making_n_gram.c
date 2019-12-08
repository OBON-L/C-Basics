#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int num;
	char text[30];
	scanf("%d %s", &num, text);
	int length = strlen(text);

	if (length < num) printf("wrong");
	else {
		for (int i = 0; i <= (length - num); i++) {
			for (int j = 0; j < num; j++) 
				printf("%c", text[i + j]);
			printf("\n");
		}
	}

	return 0;
}