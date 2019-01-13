#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(void)
{
    int N, K;
    scanf("%d %d", &N, &K);

    int arr[N];
    for (int i = 0; i < N; i++)
        scanf("%d", arr + i);

    long long tmp;
    long long max = 0;
    for (int i = 0; i < K; i++)
    {
        max += arr[i];
    }
    tmp = max;
    printf("%lld ", tmp);
    for (int i = 1; i < N - K + 1; i++)
    {
        tmp += arr[i + K - 1] - arr[i - 1];
        printf("%lld ", tmp);
        if (tmp > max)
            max = tmp;
    }
    printf("%lld\n", max);

    return 0;
}