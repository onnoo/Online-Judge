#include <iostream>

using namespace std;

int main(void)
{
    int x, y, w, h;
    scanf("%d %d %d %d", &x, &y, &w, &h);

    int x_len, y_len;

    if (x < w - x)
        x_len = x;
    else
        x_len = w - x;

    if (y < h - y)
        y_len = y;
    else
        y_len = h - y;

    if (x_len < y_len)
        printf("%d\n", x_len);
    else
        printf("%d\n", y_len);

    return 0;
}