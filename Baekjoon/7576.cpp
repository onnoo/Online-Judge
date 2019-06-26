#include <iostream>
#include <queue>
#include <utility>

using namespace std;

int arr[1000][1000];
int pos[4][2] = {{0, 1}, {0, -1}, {1, 0}, {-1, 0}};

int main(void)
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int M, N, left = 0, i, j, x, y, size, ans = -1;
    pair<int, int> p;
    queue<pair<int, int>> q;
    cin >> M >> N;

    for (i = 0; i < N; i++)
    {
        for (j = 0; j < M; j++)
        {
            cin >> arr[i][j];
            left += !arr[i][j];
            if (arr[i][j] == 1)
                q.push(make_pair(i, j));
        }
    }

    while (!q.empty())
    {
        ans++;
        size = q.size();
        for (int t = 0; t < size; t++)
        {
            p = q.front();
            q.pop();
            for (i = 0; i < 4; i++)
            {
                x = p.first + pos[i][0];
                y = p.second + pos[i][1];
                if (x >= 0 && x < N && y >= 0 && y < M)
                {
                    if (arr[x][y] == 0)
                    {
                        left--;
                        arr[x][y] = 1;
                        q.push(make_pair(x, y));
                    }
                }
            }
        }
    }

    cout << (left == 0 ? ans : -1) << '\n';
    return 0;
}