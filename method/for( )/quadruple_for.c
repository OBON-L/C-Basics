#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int m, n, sum;
	scanf("%d %d", &m, &n);
	char** matrix = malloc(sizeof(char*) * m);

	for (int i = 0; i < m; i++) {
		matrix[i] = malloc(sizeof(char) * (n + 1));
		scanf("%s", matrix[i]);
	}

	for (int i = 0; i < m; i++) {
		for (int j = 0; j < n; j++) {
			sum = 0;
			if (matrix[i][j] == '*') printf("*");
			else {
				for (int y = i - 1; y <= i + 1; y++) {
					for (int x = j - 1; x <= j + 1; x++) {
						if (y < 0 || x < 0 || y >= m || x >= n) continue;
						if (matrix[y][x] == '*') sum += 1;
					}
				}
				printf("%d", sum);
			}
		}
		printf("\n");
	}

	for (int i = 0; i < m; i++) {
		free(matrix[i]);
	}
	free(matrix);

	return 0;
}