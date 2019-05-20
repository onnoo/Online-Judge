#include <iostream>

using namespace std;

bool m[26][26];
bool visit[26];

int in_edge[26];

int N, M;
int ans = 0;

void dfs_stop(int a)
{
    for (int i = 0; i < N; i++)
    {
        if (m[a][i])
        {
            in_edge[i]--;
            if (in_edge[i] == 0)
            {
                visit[i] = true;
                dfs_stop(i);
            }
        }
    }
}

int main(void)
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    cin >> N >> M;

    char a, b;

    while (M--)
    {
        cin >> a >> b;
        m[a - 'A'][b - 'A'] = true;
        in_edge[b - 'A']++;
    }

    cin >> M;
    while (M--)
    {
        cin >> a;
        visit[a - 'A'] = true;
        dfs_stop(a - 'A');
    }

    for (int i = 0; i < N; i++)
    {
        if (!visit[i])
        {
            if (in_edge[i] > 0)
            {
                ans++;
            }
        }
    }

    cout << ans << '\n';

    return 0;
}