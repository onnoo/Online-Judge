#include <iostream>

using namespace std;

int main(void)
{
    long long N;
    scanf("%lld", &N);

    long long total = 0;
    for (long long i = N + 1; i < N * N; i += N + 1)
    {
        total += i;
    }

    printf("%lld\n", total);

    return 0;
}