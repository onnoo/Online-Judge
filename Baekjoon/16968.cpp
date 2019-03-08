#include <iostream>
#include <string>

using namespace std;

int cnt;
string s;

void num(int i, string ss)
{
    if (i == s.size())
        cnt++;
    else
    {
        for (char c = (s[i] == 'c' ? 'a' : '0'); c <= (c < 'a' ? '9' : 'z'); c++)
        {
            if (c == ss.back())
                continue;
            num(i + 1, ss + c);
        }
    }
}

int main(void)
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    cin >> s;

    num(0, "");

    cout << cnt << '\n';

    return 0;
}