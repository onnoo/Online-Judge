#include <iostream>
#include <cmath>

using namespace std;

int main(void)
{
    long long N, M;
    scanf("%lld %lld", &N, &M);

    printf("%lld\n", abs(N - M));

    return 0;
}