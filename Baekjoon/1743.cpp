#include <iostream>

using namespace std;

int N, M, K;
bool **arr;
int pos[4][2] = {{1, 0}, {-1, 0}, {0, 1}, {0, -1}};

int size(int row, int col)
{
    int ret = 1;
    arr[row][col] = false;
    for (int i = 0; i < 4; i++)
    {
        int x = col + pos[i][0];
        int y = row + pos[i][1];
        if (x >= 0 && y >= 0 && x < M && y < N && arr[y][x])
            ret += size(y, x);
    }
    return ret;
}

int main(void)
{
    ios_base::sync_with_stdio(false);
    int max = 0;
    cin >> N >> M >> K;
    arr = (bool **)malloc(sizeof(bool *) * N);
    for (int i = 0; i < N; i++)
        arr[i] = (bool *)calloc(M, sizeof(bool));

    for (int i = 0; i < K; i++)
    {
        int r, c;
        cin >> r >> c;
        arr[r - 1][c - 1] = true;
    }

    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < M; j++)
        {
            if (arr[i][j])
            {
                int sz = size(i, j);
                if (max < sz)
                    max = sz;
            }
        }
    }
    cout << max << '\n';

    return 0;
}