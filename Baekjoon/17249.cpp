#include <iostream>
#include <string>

using namespace std;

int cnt[2];

int main(void)
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    string s;
    bool chk = 0;
    cin >> s;

    for (char c : s)
    {
        if (c == '@')
            cnt[chk]++;
        if (c == '(')
            chk = 1;
    }

    cout << cnt[0] << ' ' << cnt[1] << '\n';

    return 0;
}