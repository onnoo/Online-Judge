#include <iostream>

using namespace std;

int pos[4][2] = {{1, 0}, {-1, 0}, {0, 1}, {0, -1}};
bool arr[500][500];
int N, M;
int max_area = 0;
int cnt = 0;

int DFS(int r, int c)
{
    int x, y, area = 1;

    arr[r][c] = 0;
    for (int p = 0; p < 4; p++)
    {
        x = r + pos[p][0];
        y = c + pos[p][1];

        if (x >= 0 && x < N && y >= 0 && y < M)
        {
            if (arr[x][y] == 1)
            {
                area += DFS(x, y);
            }
        }
    }
    return area;
}

int main(void)
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    
    cin >> N >> M;

    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < M; j++)
        {
            cin >> arr[i][j];
        }
    }
    
    int tmp;
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < M; j++)
        {
            if (arr[i][j] == 1)
            {
                tmp = DFS(i, j);
                cnt++;
                if (tmp > max_area)
                {
                    max_area = tmp;
                }
            }
        }
    }

    cout << cnt << '\n' << max_area << '\n';

    return 0;
}