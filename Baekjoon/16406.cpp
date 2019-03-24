#include <iostream>
#include <string>

using namespace std;

int main(void)
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int k;
    string s1, s2;
    cin >> k >> s1 >> s2;

    int match = 0, nomatch;
    for (int i = 0; i < s1.size(); i++)
    {
        if (s1[i] == s2[i])
            match++;
    }
    nomatch = s1.size() - match;

    if (match >= k)
    {
        cout << k + nomatch << '\n';
    }
    else
    {
        cout << 2 * match + nomatch - k << '\n';
    }

    return 0;
}