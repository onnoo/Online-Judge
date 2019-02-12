#include <iostream>

using namespace std;

long chicken(long n, long c, long k)
{
    if (n + c < k)
        return n;
    else
        return n + chicken((n + c) / k, (n + c) % k, k);
}

int main(void)
{
    long n, k;
    while ((scanf("%ld %ld", &n, &k)) != EOF)
    {
        printf("%ld\n", chicken(n, 0, k));
    }

    return 0;
}