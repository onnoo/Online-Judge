#include <iostream>
#include <string>
#include <stack>

using namespace std;

int main(void)
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    char c;
    stack<char> s;
    string str;
    cin >> str;
    for (int i = 0; (bool)(c = str[i]); i++)
    {
        if (c == 'A')
        {
            if ((c = str[++i]) != 'P')
            {
                cout << "NP\n";
                return 0;
            }
            for (int i = 0; i < 2; i++)
            {
                if (s.empty() || s.top() == 'A')
                {
                    cout << "NP\n";
                    return 0;
                }
                else // s.top() == 'P'
                {
                    s.pop();
                }
            }
            s.push('P');
        }
        else // c == 'A'
        {
            s.push('P');
        }
    }

    if (s.size() == 1 && s.top() == 'P')
        cout << "PPAP\n";
    else
        cout << "NP\n";

    return 0;
}