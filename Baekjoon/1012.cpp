#include <iostream>

using namespace std;

bool **arr;
int M, N;
int pos[4][2] = {{-1, 0}, {0, 1}, {1, 0}, {0, -1}};

void check(int i, int j)
{
    for (int k = 0; k < 4; k++)
    {
        int y = i + pos[k][0], x = j + pos[k][1];
        if (y >= 0 && x >= 0 && y < N && x < M && arr[y][x])
        {
            arr[y][x] = false;
            check(y, x);
        }
    }
}

int main(void)
{
    int T;
    scanf("%d", &T);
    while (T--)
    {
        int K;
        scanf("%d %d %d", &M, &N, &K);
        arr = (bool **)malloc(sizeof(bool *) * N);
        for (int i = 0; i < N; i++)
            arr[i] = (bool *)calloc(M, sizeof(bool));

        while (K--)
        {
            int X, Y;
            scanf("%d %d", &X, &Y);
            arr[Y][X] = true;
        }

        int count = 0;
        for (int i = 0; i < N; i++)
            for (int j = 0; j < M; j++)
                if (arr[i][j])
                {
                    count++;
                    check(i, j);
                }

        printf("%d\n", count);
    }

    return 0;
}