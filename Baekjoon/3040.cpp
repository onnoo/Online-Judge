#include <iostream>
#include <cmath>

using namespace std;

int main(void)
{
    int arr[9] = {0};
    for (int i = 0; i < 9; i++)
        scanf("%d", arr + i);

    int i, j, k, total;
    for (i = 0; i < 8; i++)
    {
        for (j = i + 1; j < 9; j++)
        {
            total = 0;
            for (k = 0; k < 9; k++)
            {
                if (k == i || k == j)
                    continue;
                total += arr[k];
            }
            if (total == 100)
                for (k = 0; k < 9; k++)
                {
                    if (k == i || k == j)
                        continue;
                    printf("%d\n", arr[k]);
                }
        }
    }

    return 0;
}