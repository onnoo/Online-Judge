#include <iostream>

using namespace std;

int main(void)
{
    double c, b;
    scanf("%lf%lf", &c, &b);
    printf("%.7lf\n", c / b + 1e-9);
}