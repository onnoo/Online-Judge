#include <iostream>
#include <string>
#include <cstring>
#include <algorithm>

using namespace std;

typedef long long ll;

int main(void)
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int T;
    cin >> T;
    cin.ignore();
    while (T--)
    {
        string s;
        getline(cin, s);
        char *cp = strtok(&s[0], " ");
        while (cp != NULL)
        {
            string sub(cp);
            reverse(sub.begin(), sub.end());
            cout << sub << ' ';
            cp = strtok(NULL, " ");
        }
        cout << '\n';
    }

    return 0;
}