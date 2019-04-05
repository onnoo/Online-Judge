#include <iostream>
#include <string>
#include <vector>
#include <cctype>

using namespace std;

vector<int> getPi(string p)
{
    int m = p.size(), j = 0;
    vector<int> pi(m, 0);
    for (int i = 1; i < m; i++)
    {
        while (j > 0 && p[i] != p[j])
            j = pi[j - 1];
        if (p[i] == p[j])
            pi[i] = ++j;
    }
    return pi;
}

int main(void)
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    string s, p, q = "";
    cin >> s >> p;

    for (auto c : s)
    {
        if (isalpha(c))
            q += c;
    }

    vector<int> pi = getPi(q);
    int n = q.size(), m = p.size(), j = 0;
    for (int i = 0; i < n; i++)
    {
        while (j > 0 && q[i] != p[j])
            j = pi[j - 1];
        if (q[i] == p[j])
        {
            if (j == m - 1)
            {
                cout << 1 << '\n';
                return 0;
            }
            else
            {
                ++j;
            }
        }
    }
    cout << 0 << '\n';
    return 0;
}