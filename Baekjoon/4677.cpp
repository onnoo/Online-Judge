#include <iostream>
#include <string>

using namespace std;

int N, M;
bool arr[100][100];
int pos[8][2] = {{1, 0}, {1, 1}, {0, 1}, {-1, 1}, {-1, 0}, {-1, -1}, {0, -1}, {1, -1}};

void DFS(int r, int c)
{
    int x, y;
    for (int i = 0; i < 8; i++)
    {
        x = r + pos[i][0];
        y = c + pos[i][1];
        if (x >= 0 && x < N && y >= 0 && y < M)
        {
            if (arr[x][y])
            {
                arr[x][y] = false;
                DFS(x, y);
            }
        }
    }
}

int main(void)
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int cnt;
    string s;
    cin >> N >> M;

    while (N != 0 || M != 0)
    {
        cnt = 0;
        for (int i = 0; i < N; i++)
        {
            cin >> s;
            for (int j = 0; j < M; j++)
            {
                arr[i][j] = (s[j] == '@');
            }
        }

        for (int i = 0; i < N; i++)
        {
            for (int j = 0; j < M; j++)
            {
                if (arr[i][j])
                {
                    cnt++;
                    DFS(i, j);
                }
            }
        }
        cout << cnt << '\n';
        cin >> N >> M;
    }

    return 0;
}