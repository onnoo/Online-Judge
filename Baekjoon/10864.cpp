#include <iostream>

using namespace std;

int main(void)
{
    int N, M;
    scanf("%d %d", &N, &M);

    int *arr = (int *)calloc(N, sizeof(int));

    for (int i = 0; i < M; i++)
    {
        int a, b;
        scanf("%d %d", &a, &b);
        arr[a - 1]++;
        arr[b - 1]++;
    }

    for (int i = 0; i < N; i++)
        printf("%d\n", arr[i]);

    return 0;
}