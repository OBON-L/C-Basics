#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int number;
	char name[31], result[40];

	scanf("%d", &number);
	scanf("%s", name);

	switch (number) { //different ordinal number according to the number
	case 1:
		sprintf(result, "%dst %s", number, name);
		break;
	case 2:
		sprintf(result, "%dnd %s", number, name);
		break;
	case 3:
		sprintf(result, "%drd %s", number, name);
		break;
	default:
		sprintf(result, "%dth %s", number, name);
	}

	printf("%s\n", result);

	return 0;
}
