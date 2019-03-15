#include <iostream>
#include <queue>

using namespace std;

int main(void)
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int N, K, t;
    long long ans = 0, tmp = 0;
    cin >> N >> K;

    priority_queue<int, vector<int>, greater<int>> pq;
    queue<int> q;
    for (int i = 0; i < N; i++)
    {
        cin >> t;
        q.push(t);
    }
    while (!q.empty() || !pq.empty())
    {
        if (pq.size() < K)
        {
            if (!q.empty())
            {
                t = q.front();
                q.pop();
                pq.push(t);
            }
            else
            {
                ans += tmp += pq.top();
                pq.pop();
            }
        }
        else
        {
            ans += tmp += pq.top();
            pq.pop();
        }
    }

    cout << ans << '\n';

    return 0;
}