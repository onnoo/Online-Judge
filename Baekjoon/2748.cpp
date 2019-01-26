#include <iostream>
#include <string>

using namespace std;

typedef long long ll;
ll *arr;

int main(void)
{
    int N;
    scanf("%d", &N);
    arr = (ll *)malloc(sizeof(ll) * (N + 1));
    arr[0] = 0;
    arr[1] = 1;
    for (int i = 2; i <= N; i++)
        arr[i] = arr[i - 1] + arr[i - 2];
    printf("%lld\n", arr[N]);

    return 0;
}