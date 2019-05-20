#include <iostream>
#include <string>
#include <cctype>

using namespace std;

string s;

int score(int i)
{
    if (isdigit(s[i]))
        return s[i] - '0';
    if (s[i] == 'S')
        return 10;
    if (s[i] == 'P')
        return 10 - score(i - 1);
    return 0;
}

int main(void)
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int total = 0;
    cin >> s;

    int cnt = 20;
    for (int i = 0; i < cnt; i++)
    {
        total += score(i);
        if (s[i] == 'S')
            cnt--;
    }

    for (int i = 0; i < cnt; i++)
    {
        if (s[i] == 'P' && i < cnt - 1)
        {
            total += score(i + 1);
        }
        if (s[i] == 'S' && i < cnt - 1)
        {
            total += score(i + 1);
            if (i + 2 < s.size())
                total += score(i + 2);
        }
    }

    s = s.substr(cnt, s.size());
    for (int i = 0; i < s.size(); i++)
    {
        total += score(i);
    }

    cout << total << '\n';

    return 0;
}