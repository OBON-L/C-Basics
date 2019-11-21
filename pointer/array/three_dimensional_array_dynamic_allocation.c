#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int depth, row, column;
	scanf("%d %d %d", &depth, &row, &column);

	long long*** matrix = malloc(sizeof(long long**) * depth);
	for (int i = 0; i < depth; i++) {
		matrix[i] = malloc(sizeof(long long*) * row);
		for (int j = 0; j < row; j++) {
			matrix[i][j] = malloc(sizeof(long long) * 5);
		}
	}

	for (int i = 0; i < depth; i++) {
		for (int j = 0; j < row; j++) {
			for (int k = 0; k < column; k++) {
				matrix[i][j][k] = i + j + k;
				printf("%d ", matrix[i][j][k]);
			}
			printf("\n");
		}
		printf("\n");
	}

	for (int i = 0; i < depth; i++) {
		for (int j = 0; j < row; j++) {
			free(matrix[i][j]);
		}
		free(matrix[i]);
	}
	free(matrix);

	return 0;
}