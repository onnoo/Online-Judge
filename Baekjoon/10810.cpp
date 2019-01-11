#include <iostream>

using namespace std;

int main(void)
{
    int N, M;
    scanf("%d %d", &N, &M);

    int *arr = (int *)calloc(N, sizeof(int));

    for (int t = 0; t < M; t++)
    {
        int i, j, k;
        scanf("%d %d %d", &i, &j, &k);
        for (int ii = i - 1; ii < j; ii++)
            arr[ii] = k;
    }

    for (int i = 0; i < N; i++)
        printf("%d ", arr[i]);
    printf("\n");

    return 0;
}