#include <iostream>

using namespace std;

int N, M, left_cheese, level = 2;
int pos[4][2] = {{0, 1}, {-1, 0}, {0, -1}, {1, 0}};
int arr[100][100];

void DFS(int r, int c)
{
    arr[r][c] = level + 1;
    int x, y;
    for (int i = 0; i < 4; i++)
    {
        x = r + pos[i][0];
        y = c + pos[i][1];
        if (x >= 0 && x < N && y >= 0 && y < M)
        {
            if (arr[x][y] == 1)
            {
                arr[x][y] = level + 1;
                left_cheese--;
            }
            else if (arr[x][y] <= level)
            {
                DFS(x, y);
            }
        }
    }
}

int main(void)
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    cin >> N >> M;

    int tmp;
    for (int i = 0; i < N; i++)
        for (int j = 0; j < M; j++)
        {
            cin >> tmp;
            if (tmp)
            {
                arr[i][j] = 1;
                left_cheese++;
            }
            else
            {
                arr[i][j] = level;
            }
        }

    int tmp_left, cnt = 0;
    while (left_cheese)
    {
        cnt++;
        tmp_left = left_cheese;
        DFS(0, 0);
        level++;
    }

    cout << cnt << '\n'
         << tmp_left << '\n';

    return 0;
}