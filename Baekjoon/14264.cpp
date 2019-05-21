#include <iostream>
#include <cmath>

using namespace std;

int main(void)
{
    long double L;
    scanf("%Lf", &L);
    L /= 2;
    printf("%.15LE\n", L * L * sqrt(3.0L) + 1e-9);

    return 0;
}