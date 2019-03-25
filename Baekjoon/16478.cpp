#include <iostream>

using namespace std;

int main(void)
{
    double a, b, c;
    scanf("%lf%lf%lf", &a, &b, &c);
    printf("%.7lf\n", a * c / b + 1e-9);
}