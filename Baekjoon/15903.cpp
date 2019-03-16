#include <iostream>
#include <queue>

using namespace std;

typedef long long ll;

int main(void)
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    priority_queue<ll, vector<ll>, greater<ll>> q;
    ll N, M, tmp, A, B;
    cin >> N >> M;

    for (int i = 0; i < N; i++)
    {
        cin >> tmp;
        q.push(tmp);
    }

    while (M--)
    {
        A = q.top();
        q.pop();
        B = q.top();
        q.pop();
        A += B;
        q.push(A);
        q.push(A);
    }

    ll ans = 0;
    while (!q.empty())
    {
        ans += q.top();
        q.pop();
    }
    cout << ans << '\n';

    return 0;
}