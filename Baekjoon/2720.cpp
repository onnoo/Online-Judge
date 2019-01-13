#include <iostream>

using namespace std;

int coin[] = {25, 10, 5, 1};

int main(void)
{
    int T;
    scanf("%d", &T);

    while (T--)
    {
        int C;
        scanf("%d", &C);
        for (int i = 0; i < 4; i++)
        {
            printf("%d ", C / coin[i]);
            C %= coin[i];
        }
        printf("\n");
    }

    return 0;
}