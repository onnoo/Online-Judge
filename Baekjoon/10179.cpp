#include <iostream>

using namespace std;

int main(void)
{
    int T;
    scanf("%d", &T);
    while (T--)
    {
        double num;
        scanf("%lf", &num);
        printf("$%.2lf\n", num * 0.8 + 1e-9);
    }
    return 0;
}