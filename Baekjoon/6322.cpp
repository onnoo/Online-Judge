#include <iostream>
#include <cmath>

using namespace std;

int main(void)
{
    int a, b, c, i = 1;
    double tmp;
    cin >> a >> b >> c;
    while (!(a == 0 && b == 0 && c == 0))
    {
        printf("Triangle #%d\n", i);
        if (c == -1)
            printf("c = %.3lf\n", sqrt(a * a + b * b) + 1e-9);
        else if (a == -1 && (tmp = sqrt(c * c - b * b)) > 0)
            printf("a = %.3lf\n", tmp + 1e-9);
        else if (b == -1 && (tmp = sqrt(c * c - a * a)) > 0)
            printf("b = %.3lf\n", tmp + 1e-9);
        else
            printf("Impossible.\n");
        printf("\n");
        cin >> a >> b >> c;
        i++;
    }
    return 0;
}