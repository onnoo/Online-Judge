#include <iostream>
#include <cassert>

using namespace std;

int main(void)
{
    long long N;
    scanf("%lld", &N);
    assert(N <= 1e9);
    printf("%lld", N * 4);

    return 0;
}