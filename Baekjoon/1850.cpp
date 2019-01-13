#include <iostream>

using namespace std;

typedef long long ll;

ll gcd(ll a, ll b)
{
    if (b == 0)
        return a;
    else
        return gcd(b, a % b);
}

int main(void)
{
    ll a, b;
    scanf("%lld %lld", &a, &b);

    ll sz = gcd(a, b);
    for (int i = 0; i < sz; i++)
    {
        printf("1");
    }
    printf("\n");

    return 0;
}