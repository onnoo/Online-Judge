#include <iostream>

using namespace std;

typedef long long ll;

int main(void)
{
    ll N;
    scanf("%lld", &N);

    ll i = 1;
    ll count = 0;
    while (N >= i)
    {
        N -= i++;
        count++;
    }
    printf("%lld\n", count);
    return 0;
}