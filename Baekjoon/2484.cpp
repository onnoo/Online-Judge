#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(void)
{
    int N;
    scanf("%d", &N);

    int max = 0;
    for (int i = 0; i < N; i++)
    {
        int tmp;
        int a, b, c, d;
        scanf("%d %d %d %d", &a, &b, &c, &d);

        if (a == b && b == c && c == d)
            tmp = 50000 + a * 5000;
        else if (a == b && b == c)
            tmp = 10000 + a * 1000;
        else if (a == b && b == d)
            tmp = 10000 + a * 1000;
        else if (a == c && c == d)
            tmp = 10000 + a * 1000;
        else if (b == c && c == d)
            tmp = 10000 + b * 1000;
        else if (a == b && c == d)
            tmp = 2000 + a * 500 + c * 500;
        else if (a == c && b == d)
            tmp = 2000 + a * 500 + b * 500;
        else if (a == d && b == c)
            tmp = 2000 + a * 500 + b * 500;
        else if (a == b || a == c || a == d)
            tmp = 1000 + a * 100;
        else if (b == c || b == d)
            tmp = 1000 + b * 100;
        else if (c == d)
            tmp = 1000 + c * 100;
        else
        {
            if (a > b && a > c && a > d)
                tmp = a * 100;
            else if (b > c && b > d)
                tmp = b * 100;
            else if (c > d)
                tmp = c * 100;
            else
                tmp = d * 100;
        }
        if (tmp > max)
            max = tmp;
    }

    printf("%d\n", max);

    return 0;
}