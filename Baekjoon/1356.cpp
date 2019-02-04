#include <iostream>
#include <string>

using namespace std;

int main(void)
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    string N;
    cin >> N;

    bool flag = false;
    for (int i = 1; i < N.size(); i++)
    {
        string s1 = N.substr(0, i);
        string s2 = N.substr(i, N.size() - i);
        long long tmp1 = s1[0] - 48;
        for (int i = 1; s1[i]; i++)
            tmp1 *= s1[i] - 48;

        long long tmp2 = s2[0] - 48;
        for (int i = 1; s2[i]; i++)
            tmp2 *= s2[i] - 48;

        if (tmp1 == tmp2)
        {
            flag = true;
            break;
        }
    }

    cout << (flag ? "YES" : "NO") << '\n';
    return 0;
}