#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main()
{
	char str[31];
	int n1;
	int n2;
	float n3;
	char* end;

	scanf("%[^\n]", str);

	n1 = strtol(str, &end, 10);
	n2 = strtol(end, &end, 16);
	n3 = strtof(end, NULL);

	printf("%d\n", n1);
	printf("0x%x\n", n2);
	printf("%f\n", n3);

	return 0;
}