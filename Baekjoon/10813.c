#include <stdio.h>

int main(void) {
	int N, M;
	int a, b;
	int i, j;

	scanf("%d %d", &N, &M);
	int arr[N];

	for(i = 0; i < N; i++) {
		arr[i] = i + 1;
	}

	for(i = 0; i < M; i++) {
		scanf("%d %d", &a, &b);
		a--;
		b--;
		int tmp = arr[a];
		arr[a] = arr[b];
		arr[b] = tmp;
	}

	for(i = 0; i < N; i++) {
		printf("%d ", arr[i]);
	}
	printf("\n");

	return 0;
}