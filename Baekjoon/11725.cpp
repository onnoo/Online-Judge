#include <iostream>
#include <vector>
#include <queue>

using namespace std;

typedef struct _item
{
    vector<int> adj;
} item;

int main(void)
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int N, a, b, n;
    cin >> N;

    vector<item> v(N + 1);
    vector<int> ans(N + 1);
    vector<bool> visit(N + 1);
    queue<int> q;

    for (int i = 1; i < N; i++)
    {
        cin >> a >> b;
        v[a].adj.push_back(b);
        v[b].adj.push_back(a);
    }

    q.push(1);
    while (!q.empty())
    {
        n = q.front();
        q.pop();
        for (int i : v[n].adj)
        {
            if (!visit[i])
            {
                ans[i] = n;
                q.push(i);
                visit[i] = true;
            }
        }
    }

    for (int i = 2; i <= N; i++)
    {
        cout << ans[i] << '\n';
    }

    return 0;
}