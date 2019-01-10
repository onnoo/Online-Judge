#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

bool check(int a, int b, int c)
{
    bool ret = false;
    if (a + b == c)
    {
        printf("%d+%d=%d\n", a, b, c);
        ret = true;
    }
    else if (a - b == c)
    {
        printf("%d-%d=%d\n", a, b, c);
        ret = true;
    }
    else if (a * b == c)
    {
        printf("%d*%d=%d\n", a, b, c);
        ret = true;
    }
    else if (a / b == c)
    {
        printf("%d/%d=%d\n", a, b, c);
        ret = true;
    }
    return ret;
}

int main(void)
{
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);

    if (a + b == c)
        printf("%d+%d=%d\n", a, b, c);
    else if (a - b == c)
        printf("%d-%d=%d\n", a, b, c);
    else if (a * b == c)
        printf("%d*%d=%d\n", a, b, c);
    else if (a / b == c)
        printf("%d/%d=%d\n", a, b, c);
    else if (a == b + c)
        printf("%d=%d+%d\n", a, b, c);
    else if (a == b - c)
        printf("%d=%d-%d\n", a, b, c);
    else if (a == b * c)
        printf("%d=%d*%d\n", a, b, c);
    else if (a == b / c)
        printf("%d=%d/%d\n", a, b, c);

    return 0;
}