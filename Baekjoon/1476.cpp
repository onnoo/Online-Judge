#include <iostream>

using namespace std;

int main(void)
{
    int E, S, M;
    scanf("%d %d %d", &E, &S, &M);

    int count = 1;
    int e = 1, s = 1, m = 1;
    while (!(e == E && s == S && m == M))
    {
        count++;
        e++;
        s++;
        m++;
        if (e == 16)
            e = 1;
        if (s == 29)
            s = 1;
        if (m == 20)
            m = 1;
    }

    printf("%d\n", count);

    return 0;
}