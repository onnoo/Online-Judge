#include <iostream>
#include <string>
#include <cctype>
#include <stdlib.h>

using namespace std;

int dp[100001] = {0, 1, 1, 2, 2, 1, 2, 1};
int arr[] = {1, 2, 5, 7};

int main(void)
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int x, c;
    size_t idx;
    string s, ans = "";

    cin >> s;

    if (s == "0")
    {
        cout << "W\n";
        return 0;
    }

    if ((idx = s.find('x')) != string::npos)
    {
        if (idx == 0)
            ans += "xx";
        else
        {
            x = atoi(s.substr(0, idx).c_str());
            if (abs(x / 2) == 1)
            {
                if (x < 0)
                    ans += "-xx";
                else
                    ans += "xx";
            }
            else
                ans += to_string(x / 2) + "xx";
        }
        s = s.substr(idx + 1, s.size());
    }

    if (s != "")
    {
        if (ans != "")
        {
            if (s.size() == 2 && s.back() == '1')
                ans += s.substr(0, 1) + "x+W";
            else
                ans += s + "x+W";
        }
        else
        {
            if (s == "1")
            {
                ans += "x+W";
            }
            else if (s == "-1")
            {
                ans += "-x+W";
            }
            else
            {
                ans += s + "x+W";
            }
        }
    }
    else
    {
        ans += "+W";
    }

    cout << ans << '\n';

    return 0;
}