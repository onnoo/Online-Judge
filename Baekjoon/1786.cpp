#include <iostream>
#include <string>
#include <vector>

using namespace std;

vector<int> getPi(string s)
{
    int m = s.size(), j = 0;
    vector<int> pi(m, 0);
    for (int i = 1; i < m; i++)
    {
        while (j > 0 && s[i] != s[j])
            j = pi[j - 1];
        if (s[i] == s[j])
            pi[i] = ++j;
    }
    return pi;
}

int main(void)
{
    string s, p;
    getline(cin, s);
    getline(cin, p);

    int n = s.size(), m = p.size(), j = 0;
    vector<int> pi = getPi(p);
    vector<int> ans;
    for (int i = 0; i < n; i++)
    {
        while (j > 0 && s[i] != p[j])
            j = pi[j - 1];
        if (s[i] == p[j])
        {
            if (j == m - 1)
            {
                ans.push_back(i - m + 1);
                j = pi[j];
            }
            else
            {
                j++;
            }
        }
    }

    cout << ans.size() << '\n';
    for (int i : ans)
    {
        cout << i + 1 << '\n';
    }
    return 0;
}