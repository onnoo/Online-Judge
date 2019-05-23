#include <iostream>
#include <string>
#include <cctype>

using namespace std;

int main(void)
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    string s;
    cin >> s;

    bool has_ = false;
    bool hasCap = false;
    for (char c : s)
    {
        if (c == '_')
        {
            has_ = true;
        }
        if (isupper(c))
        {
            hasCap = true;
        }
    }

    string ret = "";
    if (islower(s[0]) && !has_)
    { // C++로 변경
        for (int i = 0; i < s.size(); i++)
        {
            if (isupper(s[i]))
            {
                ret += "_";
            }
            ret += tolower(s[i]);
        }
    }
    else if (s[0] != '_' && !hasCap)
    { // JAVA로 변경
        for (int i = 0; i < s.size(); i++)
        {
            if (s[i] == '_')
            {
                if (i == s.size() - 1 || s[i + 1] == '_')
                {
                    cout << "Error!\n";
                    return 0;
                }
                ret += toupper(s[++i]);
            }
            else
            {
                ret += s[i];
            }
        }
        if (isupper(ret[0]))
            ret[0] = towlower(ret[0]);
    }
    else
    {
        cout << "Error!\n";
        return 0;
    }

    cout << ret << '\n';

    return 0;
}