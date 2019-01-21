#include <iostream>
#include <cmath>
#define _USE_MATH_DEFINES

using namespace std;

int main(void)
{
    double R;
    scanf("%lf", &R);
    printf("%lf\n", M_PI * R * R + 1e-9);
    printf("%lf\n", 2 * R * R + 1e-9);

    return 0;
}