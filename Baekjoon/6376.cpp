#include <iostream>

using namespace std;

int fac(int n)
{
    int ret = 1;
    for (int i = 1; i <= n; i++)
        ret *= i;
    return ret;
}

int main(void)
{
    printf("n e\n");
    printf("- -----------\n");
    double e = 0;
    for (int i = 0; i <= 9; i++)
    {
        e += 1.0 / fac(i);
        if (i < 3)
            printf("%d %.9g\n", i, e);
        else
            printf("%d %.9f\n", i, e);
    }

    return 0;
}