#include <iostream>

using namespace std;

int main(void)
{
    int T, arr[8], sum, tmp;
    int mul[] = {1, 5, 2, 2};
    scanf("%d", &T);
    while (T--)
    {
        sum = 0;
        for (int i = 0; i < 8; i++)
            scanf("%d", arr + i);

        for (int i = 0; i < 4; i++)
        {
            tmp = 0;
            tmp = arr[i] + arr[i + 4];
            if (i == 0 || i == 1)
            {
                if (tmp < 1)
                    tmp = 1;
            }
            else if (i == 2)
            {
                if (tmp < 0)
                    tmp = 0;
            }
            sum += tmp * mul[i];
        }
        printf("%d\n", sum);
    }

    return 0;
}