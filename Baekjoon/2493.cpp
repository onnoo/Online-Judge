#include <iostream>
#include <stack>
#include <utility>

using namespace std;

int main(void)
{
    iostream::sync_with_stdio(0);
    cin.tie(0);

    int N, num, ans;
    stack<pair<int, int>> s;

    cin >> N;
    for (int i = 1; i <= N; i++)
    {
        ans = 0;
        cin >> num;
        
        while (!s.empty() && s.top().first < num)
        {
            s.pop();
        }
        if (!s.empty()) { ans = s.top().second; }

        cout << ans << ' ';
        s.push(make_pair(num, i));
    }

    return 0;
}