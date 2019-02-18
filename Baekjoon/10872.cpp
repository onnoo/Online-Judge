#include <iostream>

using namespace std;

long long fac(int n)
{
    long long ret = 1;
    for (int i = 1; i <= n; i++)
        ret *= i;
    return ret;
}

int main(void)
{
    int n;
    scanf("%d", &n);
    printf("%lld\n", fac(n));
    return 0;
}