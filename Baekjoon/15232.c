#include <stdio.h>

int main(void) {
	int R, C;
	scanf("%d", &R);
	scanf("%d", &C);

	for(int i = 0; i < R; i++) {
		for(int j = 0; j < C; j++)
			printf("*");
		printf("\n");
	}

	return 0;
}