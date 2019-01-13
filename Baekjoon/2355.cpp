#include <iostream>

using namespace std;

long long sigma(long long n)
{
    return n * (n + 1) / 2;
}

int main(void)
{
    long long A, B;
    scanf("%lld %lld", &A, &B);
    long long result;
    if (B > A)
        result = sigma(B) - sigma(A - 1);
    else
        result = sigma(A) - sigma(B - 1);
    printf("%lld\n", result);

    return 0;
}