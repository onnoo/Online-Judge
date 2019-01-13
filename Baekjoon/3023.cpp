#include <iostream>
#include <string>

using namespace std;

int main(void)
{
    int R, C;
    scanf("%d %d", &R, &C);

    char arr[R][C + 1];
    for (int i = 0; i < R; i++)
        scanf("%s", arr[i]);

    char res[2 * R][2 * C + 1];
    for (int i = 0; i < R; i++)
    {
        for (int j = 0; j < C; j++)
        {
            res[i][j] = arr[i][j];
            res[i][C + j] = arr[i][C - j - 1];
            res[R + i][j] = arr[R - i - 1][j];
            res[R + i][C + j] = arr[R - i - 1][C - j - 1];
        }
    }

    int A, B;
    scanf("%d %d", &A, &B);
    if (res[A - 1][B - 1] == '.')
        res[A - 1][B - 1] = '#';
    else
        res[A - 1][B - 1] = '.';

    for (int i = 0; i < 2 * R; i++)
    {
        res[i][2 * C] = '\0';
        printf("%s\n", res[i]);
    }

    return 0;
}