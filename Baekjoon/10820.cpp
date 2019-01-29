#include <iostream>
#include <string>
#include <algorithm>
#include <cctype>

using namespace std;

typedef long long ll;

int main(void)
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    string s;
    while (getline(cin, s))
    {
        int space = 0, up = 0, low = 0, num = 0;
        for (int i = 0; s[i]; i++)
        {
            char c = s[i];
            if (isdigit(c))
                num++;
            else if (isupper(c))
                up++;
            else if (islower(c))
                low++;
            else
                space++;
        }
        cout << low << ' ' << up << ' ' << num << ' ' << space << '\n';
    }

    return 0;
}