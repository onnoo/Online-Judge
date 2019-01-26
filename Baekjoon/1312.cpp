#include <iostream>

using namespace std;

int main(void)
{
    int A, B, N;
    scanf("%d%d%d", &A, &B, &N);
    while (A >= B)
        A %= B;
    while (--N)
        A = A * 10 % B;

    printf("%d\n", A * 10 / B);

    return 0;
}