#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main(void)
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    string s, L = "";
    cin >> s;

    for (int i = 0; i < s.size(); i++)
    {
        if (L == "" || L.back() < s[i])
        {
            L += s[i];
        }
        else
        {
            auto it = lower_bound(L.begin(), L.end(), s[i]);
            *it = s[i];
        }
    }

    cout << 26 - L.size() << '\n';

    return 0;
}