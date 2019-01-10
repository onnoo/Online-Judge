#include <iostream>

using namespace std;

int main(void)
{
    int N, M;
    scanf("%d %d", &N, &M);
    int arr[N];
    for (int i = 0; i < N; i++)
    {
        arr[i] = i + 1;
    }
    int from, to;
    for (int i = 0; i < M; i++)
    {
        scanf("%d %d", &from, &to);
        from--;
        to--; // 0, 1
        int tmp[to - from + 1];
        int k = 0;
        for (int j = to; j >= from; j--)
        {
            tmp[k++] = arr[j];
        }
        k = 0;
        for (int j = from; j <= to; j++)
            arr[j] = tmp[k++];
    }
    for (int j = 0; j < N; j++)
        printf("%d ", arr[j]);
    printf("\n");
    return 0;
}