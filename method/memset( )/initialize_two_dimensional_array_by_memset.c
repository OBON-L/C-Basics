#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int rc; // row and column
	scanf("%d", &rc);

	int** matrix = malloc(sizeof(int*) * rc);
	for (int i = 0; i < rc; i++) {
		matrix[i] = malloc(sizeof(int) * rc);
		memset(matrix[i], 0, sizeof(int) * rc);
		matrix[i][i] = 1;
	}

	for (int i = 0; i < rc; i++) {
		for (int j = 0; j < rc; j++) {
			printf("%d ", matrix[i][j]);
		}
		printf("\n");
	}

	for (int i = 0; i < rc; i++) {
		free(matrix[i]);
	}
	free(matrix);

	return 0;
}