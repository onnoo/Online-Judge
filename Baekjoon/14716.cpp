#include <iostream>

using namespace std;

bool arr[251][251];
int pos[8][2] = {{1, 0}, {1, 1}, {0, 1}, {-1, 1}, {-1, 0}, {-1, -1}, {0, -1}, {1, -1}};
int M, N;

void DFS(int r, int c)
{
    int x, y;
    for (int i = 0; i < 8; i++)
    {
        x = r + pos[i][0];
        y = c + pos[i][1];
        if (x >= 0 && x < M && y >= 0 && y < N)
        {
            if (arr[x][y])
            {
                arr[x][y] = 0;
                DFS(x, y);
            }
        }
    }
}

int main(void)
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int cnt = 0;
    cin >> M >> N;

    for (int i = 0; i < M; i++)
    {
        for (int j = 0; j < N; j++)
        {
            cin >> arr[i][j];
        }
    }

    for (int i = 0; i < M; i++)
    {
        for (int j = 0; j < N; j++)
        {
            if (arr[i][j])
            {
                cnt++;
                DFS(i, j);
            }
        }
    }

    cout << cnt << '\n';

    return 0;
}