#include <iostream>

using namespace std;

int gcd(int a, int b)
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
        int a, b;
        scanf("%d %d", &a, &b);

        int gcd_num = gcd(a, b);
        printf("%d %d\n", a * b / gcd_num, gcd_num);
    }

    return 0;
}