#include <iostream>

using namespace std;

typedef long long ll;

int main(void)
{
    ll A, B;
    scanf("%lld %lld", &A, &B);

    ll max, min;
    if (A > B)
    {
        max = A;
        min = B;
    }
    else
    {
        max = B;
        min = A;
    }

    printf("%lld\n", (max - min - 1 < 0) ? 0 : max - min - 1);
    for (ll i = min + 1; i < max; i++)
    {
        printf("%lld ", i);
    }
    printf("\n");

    return 0;
}