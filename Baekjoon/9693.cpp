#include <iostream>

using namespace std;

int main(void)
{
    int N, tmp, two, five, t = 1;
    scanf("%d", &N);
    while (N != 0)
    {
        two = 0;
        five = 0;
        for (int i = 1; i <= N; i++)
        {
            tmp = i;
            while (!(tmp % 2))
            {
                two++;
                tmp /= 2;
            }
            while (!(tmp % 5))
            {
                five++;
                tmp /= 5;
            }
        }
        printf("Case #%d: %d\n", t, min(two, five));
        t++;
        scanf("%d", &N);
    }

    return 0;
}