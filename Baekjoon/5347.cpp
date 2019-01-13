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
    int N;
    scanf("%d", &N);

    for (int i = 0; i < N; i++)
    {
        ll a, b;
        scanf("%lld %lld", &a, &b);
        printf("%lld\n", a * b / gcd(a, b));
    }

    return 0;
}