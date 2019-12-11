#include <stdio.h>
#include <stdlib.h>

union Datum {
	char c;
	int n;
};

int main()
{
	union Datum d1;
	union Datum* d2 = malloc(sizeof(union Datum));

	d1.n = 0x5678;
	printf("0x%x %d\n", d1.c, sizeof(d1)); // 0x78 4

	d2->n = 0x12345678;
	printf("0x%x 0x%x\n", d2->n, d2->c); // 0x78 0x12345678

	free(d2);

	return 0;
}