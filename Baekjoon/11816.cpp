#include <iostream>
#include <string>

using namespace std;

int c2d(char c)
{
    if (c < 'a')
        return c - '0';
    else
        return 10 + c - 'a';
}

int conv(string s, int base)
{
    int ret = 0, w = 1;

    for (int i = s.size() - 1; i >= 0; i--)
    {
        ret += c2d(s[i]) * w;
        w *= base;
    }
    return ret;
}

int main(void)
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    string s;
    int ans;
    cin >> s;

    if (s[1] == 'x')
    {
        // 16진수 > 10진수
        ans = conv(s.substr(2, s.size()).c_str(), 16);
    }
    else if (s[0] == '0')
    {
        // 8진수 > 10진수
        ans = conv(s.substr(1, s.size()).c_str(), 8);
    }
    else
    {
        ans = atoi(s.c_str());
    }
    cout << ans << '\n';

    return 0;
}