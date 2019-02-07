#include <iostream>
#include <utility>
#include <queue>

using namespace std;

typedef long long ll;
typedef pair<ll, ll> pii;

int main(void)
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int N, C;
    cin >> N >> C;
    priority_queue<pii, vector<pii>, greater<pii>> q; // cool, num

    for (int i = 1; i <= N; i++)
        q.push(make_pair(0, i));

    for (int i = 0; i < C; i++)
    {
        ll T;
        cin >> T;
        cout << q.top().second << ' ';
        q.push(make_pair(q.top().first + T, q.top().second));
        q.pop();
    }
    cout << '\n';

    return 0;
}