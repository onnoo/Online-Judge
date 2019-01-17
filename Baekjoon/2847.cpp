#include <iostream>

using namespace std;

int main(void)
{
    int N, count = 0;
    scanf("%d", &N);
    int *arr = (int *)malloc(sizeof(int) * N);
    for (int i = 0; i < N; i++)
        scanf("%d", arr + i);

    for (int i = N - 1; i > 0; i--)
        if (arr[i] <= arr[i - 1])
        {
            int tmp = arr[i - 1] - arr[i] + 1;
            count += tmp;
            arr[i - 1] -= tmp;
        }

    printf("%d\n", count);

    return 0;
}