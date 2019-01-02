#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int compare(const void *a, const void *b);

int main(void) {
	int N;
	int count = 0;
	scanf("%d", &N);

	char *arr[N];

	for(int i = 0; i < N; i++) {
		char* tmp = malloc(sizeof(char) * 11);
		scanf("%s", tmp);
		qsort(tmp, strlen(tmp), sizeof(char), compare);
		int result = 1;
		int j;
		for(j = 0; j < count; j++) {
			if(strcmp(arr[j], tmp) == 0) {
				result = 0;
			}
		}
		if (result == 1) {
			arr[j] = tmp;
			count++;
		}
	}

	printf("%d\n", count);

	return 0;

}

int compare(const void *a, const void *b) {
	return strcmp((char *)a, (char *)b);
}