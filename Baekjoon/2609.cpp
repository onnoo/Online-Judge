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
    int a, b;
    scanf("%d %d", &a, &b);

    int gcd_num = gcd(a, b);
    printf("%d\n%d\n", gcd_num, a * b / gcd_num);

    return 0;
}