#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

bool **arr;
int pos[4][2] = {{1, 0}, {-1, 0}, {0, 1}, {0, -1}};
int M, N, K;

int DFS(int r, int c)
{
    arr[r][c] = true;
    int ret = 1;
    for (int i = 0; i < 4; i++)
    {
        int x = r + pos[i][0];
        int y = c + pos[i][1];
        if (x >= 0 && x < M && y >= 0 && y < N && !arr[x][y])
        {
            ret += DFS(x, y);
        }
    }
    return ret;
}

int main(void)
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    cin >> M >> N >> K;

    arr = (bool **)malloc(sizeof(bool *) * M);
    for (int i = 0; i < M; i++)
        arr[i] = (bool *)calloc(N, sizeof(bool));

    while (K--)
    {
        int x1, y1, x2, y2;
        cin >> x1 >> y1 >> x2 >> y2;
        for (int i = y1; i < y2; i++)
            for (int j = x1; j < x2; j++)
                arr[i][j] = true;
    }

    vector<int> v;

    for (int i = 0; i < M; i++)
    {
        for (int j = 0; j < N; j++)
        {
            if (!arr[i][j])
            {
                int result = DFS(i, j);
                v.push_back(result);
            }
        }
    }
    sort(v.begin(), v.end());

    cout << v.size() << '\n';
    for (int i : v)
    {
        cout << i << ' ';
    }
    cout << '\n';

    return 0;
}