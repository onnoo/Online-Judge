#include <iostream>
#include <string>

using namespace std;

int main(void)
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    string s, tmp;
    getline(cin, s);

    int idx = 0;
    string ans = "UCPC";

    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == ans[idx])
        {
            idx++;
            if (idx == 4)
            {
                cout << "I love UCPC\n";
                return 0;
            }
        }
    }
    cout << "I hate UCPC\n";

    return 0;
}