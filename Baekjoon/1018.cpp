#include <iostream>

using namespace std;

char **borad = nullptr;

int count(int i, int j, char c)
{
    int ret = 0;
    for (int row = i; row < i + 8; row++)
    {
        for (int col = j; col < j + 8; col++)
        {
            if ((row - i + col - j) % 2 == 0 && borad[row][col] != c)
                ret++;
            else if ((row - i + col - j) % 2 == 1 && borad[row][col] == c)
                ret++;
        }
    }
    if (ret > 64 - ret)
        return 64 - ret;
    else
        return ret;
}

int main(void)
{
    int N, M; //행, 열
    scanf("%d %d", &N, &M);

    borad = (char **)malloc(sizeof(char *) * N);
    for (int i = 0; i < N; i++)
    {
        borad[i] = (char *)malloc(sizeof(char) * M + 1);
        scanf("%s", borad[i]);
    }

    int min;
    for (int i = 0; i <= N - 8; i++)
    {
        for (int j = 0; j <= M - 8; j++)
        {
            int tmp = count(i, j, borad[i][j]);
            if (i == 0 && j == 0)
                min = tmp;
            if (min > tmp)
                min = tmp;
        }
    }

    printf("%d\n", min);

    return 0;
}