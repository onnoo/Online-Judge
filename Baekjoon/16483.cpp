#include <iostream>

using namespace std;

int main(void)
{
    double T;
    scanf("%lf", &T);
    printf("%.0lf\n", (T / 2) * (T / 2) + 1e-9);
}