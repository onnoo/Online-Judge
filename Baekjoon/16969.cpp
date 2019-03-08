#include <iostream>
#include <string>

using namespace std;

string s;

long long func(int i)
{
    if (i == s.size())
        return 1;
    else
    {
        char c = s[i];
        int d = (c == 'c' ? 26 : 10);
        long long val = d;
        for (i++; s[i] == c; i++)
        {
            val *= d - 1;
            val %= 1000000009;
        }
        return (val * func(i)) % 1000000009;
    }
}

int main(void)
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    cin >> s;

    cout << func(0) << '\n';

    return 0;
}