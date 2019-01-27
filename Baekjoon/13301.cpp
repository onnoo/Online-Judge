#include <iostream>

using namespace std;

typedef long long ll;

int main(void)
{
    int N;
    scanf("%d", &N);

    ll *arr = (ll *)malloc(sizeof(ll) * (N + 1));
    arr[0] = 0;
    arr[1] = 1;
    for (int i = 2; i <= N; i++)
        arr[i] = arr[i - 1] + arr[i - 2];

    printf("%lld\n", arr[N] * 4 + arr[N - 1] * 2);

    return 0;
}