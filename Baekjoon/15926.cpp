#include <iostream>
#include <stack>
#include <string>
#include <algorithm>
#include <utility>

using namespace std;

int main(void)
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int N;
    string s;
    stack<pair<char, int>> st;

    cin >> N >> s;

    for (int i = 0; s[i]; i++)
    {
        char c = s[i];
        if (c == '(')
        {
            st.push(make_pair(c, i));
        }
        else
        {
            if (!st.empty())
                st.pop();
            else
            {
                s[i] = 'X';
                while (!st.empty())
                {
                    s[st.top().second] = 'X';
                    st.pop();
                }
            }
        }
    }
    while (!st.empty())
    {
        s[st.top().second] = 'X';
        st.pop();
    }

    int ans = 0, cnt = 0;
    for (char c : s)
    {
        if (c == 'X')
        {
            if (cnt > ans)
                ans = cnt;
            cnt = 0;
        }
        else
        {
            cnt++;
        }
    }
    if (cnt > ans)
        ans = cnt;

    cout << ans << '\n';

    return 0;
}