#include <iostream>
#include <string>

using namespace std;

int main(void)
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    string s;
    cin >> s;
    int cnt = s.size() - 1, tmp = 1;

    if (s[0] > '1')
        cnt = s.size();
    else
    {
        for (int i = 1; i < s[i]; i++)
        {
            if (s[i] > '1')
            {
                tmp = tmp + s.size() - i;
                break;
            }
            else if (s[i] == '1')
                tmp++;
        }
    }

    cout << (cnt > tmp ? cnt : tmp) << '\n';

    return 0;
}