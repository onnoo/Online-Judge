#include <iostream>
#include <queue>

using namespace std;

int main(void)
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int N, M, a, b, node, cnt = 0;
    bool arr[501][501] = {0,};
    bool chk[501] = {0, 1, };
    queue<int> q;

    cin >> N >> M;

    for (int i = 0; i < M; i++)
    {
        cin >> a >> b;
        arr[a][b] = true;
        arr[b][a] = true;
    }

    q.push(1);
    for (int i = 0; i < 2; i++)
    {
        for (int t = q.size(); t > 0; t--)
        {
            node = q.front();
            for (int j = 1; j <= N; j++)
            {
                if (arr[node][j] && !chk[j])
                {
                    chk[j] = true;
                    cnt++;
                    q.push(j);
                }
            }
            q.pop();
        }
    }

    cout << cnt << '\n';

    return 0;
}