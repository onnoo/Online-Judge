#include <iostream>
#include <algorithm>

using namespace std;

int main(void)
{
    int N, M, tmp;
    scanf("%d", &N);
    int *arr = (int *)malloc(sizeof(int) * N);
    for (int i = 0; i < N; i++)
        scanf("%d", arr + i);
    sort(arr, arr + N);

    scanf("%d", &M);
    for (int i = 0; i < M; i++)
    {
        scanf("%d", &tmp);
        printf("%d ", binary_search(arr, arr + N, tmp));
    }
    printf("\n");

    return 0;
}