#include <iostream>
#include <vector>
#include <algorithm>
#include <iterator>

using namespace std;

int main(void)
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int N, M, ans = 0;
    cin >> N >> M;

    vector<int> q(N);
    for (int i = 0; i < N; i++)
        q[i] = i + 1;

    for (int i = 0; i < M; i++)
    {
        int tmp, cnt = 0;
        cin >> tmp;
        auto head = q.begin();
        auto tail = q.end();
        while (true)
        {
            if (*head == tmp)
            {
                ans += cnt;
                advance(head, 1);
                rotate(q.begin(), head, q.end());
                q.pop_back();
                break;
            }
            else if (*tail == tmp)
            {
                ans += cnt;
                advance(tail, 1);
                rotate(q.begin(), tail, q.end());
                q.pop_back();
                break;
            }
            advance(head, 1);
            advance(tail, -1);
            cnt++;
        }
    }

    cout << ans << '\n';
    return 0;
}