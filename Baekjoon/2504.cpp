#include <iostream>
#include <algorithm>
#include <string>
#include <stack>
#include <vector>

using namespace std;

int main(void)
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int ans = 0;
    stack<char> st;
    stack<int> val;
    string s;
    cin >> s;

    for (char c : s)
    {
        if (c == '(')
        {
            st.push(c);
            val.push(1);
        }
        else if (c == '[')
        {
            st.push(c);
            val.push(1);
        }
        else if (c == ')')
        {
            if (st.empty() || st.top() != '(')
            {
                ans = 0;
                break;
            }
            else
            {
                st.pop();
                int tmp = val.top();
                val.pop();
                if (val.empty())
                    ans += tmp * 2;
                else
                    val.top() = val.top() == 1 ? tmp * 2 : val.top() + tmp * 2;
            }
        }
        else if (c == ']')
        {
            if (st.empty() || st.top() != '[')
            {
                ans = 0;
                break;
            }
            else
            {
                st.pop();
                int tmp = val.top();
                val.pop();
                if (val.empty())
                    ans += tmp * 3;
                else
                    val.top() = val.top() == 1 ? tmp * 3 : val.top() + tmp * 3;
            }
        }
    }

    cout << (st.empty() ? ans : 0) << '\n';

    return 0;
}