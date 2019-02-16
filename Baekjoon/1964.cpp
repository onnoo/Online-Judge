#include <iostream>

using namespace std;

int main(void)
{
    long long N;
    scanf("%lld", &N);

    long long total = 5;

    for (long long i = 2; i <= N; i++)
    {
        total += 4 + 3 * (i - 1);
    }

    printf("%lld\n", total % 45678);

    return 0;
}