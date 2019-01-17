#include <iostream>

using namespace std;

int main(void)
{
    int b, m;
    char c;
    scanf("%d %c %d", &b, &c, &m);

    while (!(b == 0 && c == 'W' && m == 0))
    {
        if (c == 'W' && b - m >= -200)
            printf("%d\n", b - m);
        else if (c == 'D')
            printf("%d\n", b + m);
        else
            printf("Not allowed\n");
        scanf("%d %c %d", &b, &c, &m);
    }

    return 0;
}