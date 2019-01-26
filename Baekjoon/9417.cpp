#include <iostream>
#include <vector>
#include <string>
#include <cstring>
#include <algorithm>

using namespace std;

int gcd(int a, int b)
{
    if (b == 0)
        return a;
    else if (a > b)
        return gcd(b, a % b);
    else
        return gcd(a, b % a);
}

int main(void)
{
    ios_base::sync_with_stdio(false);
    int T;
    cin >> T;
    cin.ignore();
    vector<int> v;
    while (T--)
    {
        string s;
        getline(cin, s);
        char *cp = strtok(&s[0], " ");
        while (cp != nullptr)
        {
            v.push_back(stoi(cp));
            cp = strtok(nullptr, " ");
        }

        int max_gcd = 0, tmp;
        for (int i = 0; i < v.size() - 1; i++)
        {
            for (int j = i + 1; j < v.size(); j++)
            {
                tmp = gcd(v[i], v[j]);
                if (tmp > max_gcd)
                    max_gcd = tmp;
            }
        }
        cout << max_gcd << '\n';

        v.clear();
    }
    return 0;
}