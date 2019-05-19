#include <iostream>
#include <string>

using namespace std;

int main(void)
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    string a, b, s = "", tmp;
    cin >> a >> b;

    for (int i = 0; i < a.size(); i++)
    {
        s += a[i];
        s += b[i];
    }

    while (s.size() > 2)
    {
        tmp = "";
        for (int i = 1; i < s.size(); i++)
        {
            tmp += ((s[i - 1] - '0' + s[i] - '0') % 10 + '0');
        }
        s = tmp;
    }

    cout << s << '\n';

    return 0;
}