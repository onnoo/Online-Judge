#include <iostream>
#include <string>
#include <map>

using namespace std;

/*
M 1000
D 500
C 100
L 50
X 10
V 5
I 1
*/

int main(void)
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    map<char, int> m;
    char c[7] = {'I', 'V', 'X', 'L', 'C', 'D', 'M'};
    int v[7] = {1, 5, 10, 50, 100, 500, 1000};
    for (int i = 0; i < 7; i++)
        m[c[i]] = v[i];

    string s[2];
    int n[2] = {0, 0};
    cin >> s[0] >> s[1];

    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; s[i][j]; j++)
        {
            if (j < s[i].size() - 1)
            {
                if (m[s[i][j]] < m[s[i][j + 1]])
                {
                    n[i] += m[s[i][j + 1]] - m[s[i][j]];
                    j++;
                }
                else
                {
                    n[i] += m[s[i][j]];
                }
            }
            else
            {
                n[i] += m[s[i][j]];
            }
        }
    }

    int ans_n = n[0] + n[1];
    cout << ans_n << '\n';

    string ans_s = "";
    for (int i = 6; i >= 0; i -= 2)
    {
        int tmp;
        while ((tmp = ans_n / m[c[i]]))
        {
            if (tmp == 9)
            {
                ans_s += c[i];
                ans_s += c[i + 2];
                ans_n %= m[c[i]];
            }
            else if (tmp == 4)
            {
                ans_s += c[i];
                ans_s += c[i + 1];
                ans_n %= m[c[i]];
            }
            else if (tmp >= 5)
            {
                ans_s += c[i + 1];
                ans_n -= m[c[i + 1]];
            }
            else
            {
                ans_s += c[i];
                ans_n -= m[c[i]];
            }
        }
    }
    cout << ans_s << '\n';

    return 0;
}