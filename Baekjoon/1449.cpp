#include <iostream>
#include <queue>

using namespace std;

int main(void)
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int N, L, M, end = -1, cnt = 0;
    cin >> N >> L;
    priority_queue<int, vector<int>, greater<int>> q;

    for (int i = 0; i < N; i++)
    {
        cin >> M;
        q.push(M);
    }

    while (!q.empty())
    {
        int now = q.top();
        q.pop();
        if (end < now)
        {
            cnt++;
            end = now + L - 1;
        }
    }

    cout << cnt << '\n';

    return 0;
}