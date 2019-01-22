#include <iostream>

using namespace std;

int gcd(int a, int b)
{
    if (b == 0)
        return a;
    else
    {
        if (a > b)
            return gcd(b, a % b);
        else
            return gcd(a, b % a);
    }
}

int main(void)
{
    int arr[5];
    for (int i = 0; i < 5; i++)
        scanf("%d", arr + i);

    int min = 1000000;

    for (int i = 0; i < 4; i++)
    {
        for (int j = i + 1; j < 5; j++)
        {

            int res = 0, tmp;
            for (int k = 0; k < 5; k++)
            {
                if (k == i || k == j)
                    continue;
                if (!res)
                    res = arr[k];
                else
                {
                    tmp = res;
                    res *= arr[k];
                    res /= gcd(tmp, arr[k]);
                }
            }
            if (min > res)
                min = res;
        }
    }

    printf("%d\n", min);

    return 0;
}