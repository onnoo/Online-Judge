#include <iostream>
#include <algorithm>

using namespace std;

int main(void)
{
    int a[3];
    scanf("%d%d%d", a + 0, a + 1, a + 2);
    while (!(a[0] == 0 && a[1] == 0 && a[2] == 0))
    {
        sort(a, a + 3);
        if (a[2] * a[2] == a[1] * a[1] + a[0] * a[0])
            printf("right\n");
        else
            printf("wrong\n");
        scanf("%d%d%d", a + 0, a + 1, a + 2);
    }
    return 0;
}