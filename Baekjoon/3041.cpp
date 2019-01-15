#include <iostream>
#include <cmath>

using namespace std;

int main(void)
{
    int total = 0;
    char arr[4][5] = {0};

    for (int i = 0; i < 4; i++)
        scanf("%s", arr + i);

    for (int i = 0; i < 4; i++)
        for (int j = 0; j < 4; j++)
            if (arr[i][j] != '.')
            {
                int tmp = abs((i * 4 + j) / 4 - (arr[i][j] - 65) / 4) + abs((i * 4 + j) % 4 - (arr[i][j] - 65) % 4);
                total += tmp;
            }

    printf("%d\n", total);

    return 0;
}