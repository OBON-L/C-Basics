#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

struct Person {
	char name[30];
	int age;
};

int main()
{
	struct Person* p[5];
	int oldestN = 0;
	int n;

	for (int i = 0; i < sizeof(p) / sizeof(struct Person*); i++) {
		p[i] = malloc(sizeof(struct Person));
		scanf("%s %d", &(p[i]->name), &(p[i]->age));
		if (oldestN < p[i]->age) {
			oldestN = p[i]->age;
			n = i;
		}
	}

	printf("%s", p[n]->name);

	for (int i = 0; i < sizeof(p) / sizeof(struct Person*); i++)
	{
		free(p[i]);
	}

	return 0;
}