#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int row, col;
	scanf("%d %d", &row, &col);
	
	int** arr = malloc(sizeof(int*) * row);
	
	for (int i = 0; i < row; i++) {
		arr[i] = malloc(sizeof(int) * col);
	}

	for (int i = 0; i < row; i++) {
		for (int j = 0; j < col; j++) {
			arr[i][j] = i + j;
			printf("%d", arr[i][j]);
		}
		printf("\n");
	}

	for (int i = 0; i < row; i++) {
		free(arr[i]);
	}

	free(arr);
	
	return 0;
}