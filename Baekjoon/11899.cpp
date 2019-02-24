#include <iostream>
#include <stack>
#include <string>

using namespace std;

int main(void)
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int cnt = 0;
    string s;
    stack<char> st;
    cin >> s;

    for (int i = 0; s[i]; i++)
    {
        if (s[i] == '(')
            st.push('(');
        else
        {
            if (st.empty())
                cnt++;
            else
            {
                if (st.top() == '(')
                    st.pop();
                else
                    cnt++;
            }
        }
    }

    cout << cnt + st.size() << '\n';

    return 0;
}