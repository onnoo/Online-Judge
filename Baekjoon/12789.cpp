#include <iostream>
#include <stack>
#include <queue>

using namespace std;

int main(void)
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    stack<int> s;
    queue<int> q;
    int N, tmp;

    cin >> N;
    for (int i = 0; i < N; i++)
    {
        cin >> tmp;
        q.push(tmp);
    }

    bool ans = true;
    for (int i = 1; i <= N; i++)
    {
        bool chk = true;
        if (s.empty() || (!s.empty() && s.top() != i))
            while (!q.empty() && q.front() != i)
            {
                s.push(q.front());
                q.pop();
            }

        if (q.front() == i)
        {
            q.pop();
            chk = false;
        }

        if (chk && !s.empty())
        {
            if (s.top() == i)
            {
                s.pop();
            }
            else
            {
                ans = false;
                break;
            }
        }
    }

    cout << (ans ? "Nice" : "Sad") << '\n';

    return 0;
}