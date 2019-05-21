#include <iostream>
#include <queue>
#include <vector>

using namespace std;

int main(void)
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int N, num, ans = 0;
    priority_queue<int> q;
    cin >> N;
    while (N--)
    {
        cin >> num;
        q.push(num);
    }

    num = q.top();
    q.pop();
    while (!q.empty())
    {
        ans += num * q.top();
        num += q.top();
        q.pop();
    }

    cout << ans << '\n';

    return 0;
}