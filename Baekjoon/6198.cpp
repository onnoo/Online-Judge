#include <iostream>
#include <stack>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    stack<long long> s;
    long long N, a;
    long long cnt = 0;
    int i;

    cin >> N;

    for (i = 0; i < N; i++)
    {
        cin >> a;
        while (!s.empty())
        {
            if (s.top() <= a)
                s.pop();
            else
                break;
        }
        s.push(a);
        cnt += s.size() - 1;
    }
    cout << cnt << '\n';

    return 0;
}