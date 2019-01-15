#include <iostream>

using namespace std;

int main(void)
{
    int N, K, count = 0;
    scanf("%d %d", &N, &K);

    int *arr = (int *)malloc(sizeof(int) * N);
    for (int i = 0; i < N; i++)
        scanf("%d", arr + i);

    for (int i = N - 1; i >= 0; i--)
    {
        count += K / arr[i];
        K %= arr[i];
    }

    cout << count << '\n';

    return 0;
}