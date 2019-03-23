#include <iostream>
#include <string>

using namespace std;

int main(void)
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    string s;
    unsigned long long k;
    cin >> s >> k;
    for (int i = 0; i < s.size() / 2; i++)
    {
        if (s[i] != s[s.size() - i - 1])
        {
            cout << "NO\n";
            return 0;
        }
    }
    cout << "YES\n";
    return 0;
}