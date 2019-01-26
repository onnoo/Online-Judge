#include <iostream>
#include <string>
#include <cmath>
#include <algorithm>

using namespace std;

int main(void)
{
    int T;
    cin >> T;
    cin.ignore();
    while (T--)
    {
        string s, tmp;
        getline(cin, s);
        for (int i = 0; s[i]; i++)
        {
            if (s[i] >= 'a' && s[i] <= 'z')
                s[i] -= 32;
        }
        tmp = s;
        reverse(s.begin(), s.end());
        if (tmp == s)
            cout << "Yes\n";
        else
            cout << "No\n";
    }

    return 0;
}