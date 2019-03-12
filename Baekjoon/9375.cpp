#include <iostream>
#include <string>
#include <map>
#include <iterator>

using namespace std;

int main(void)
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    map<string, int> m;
    int T, N;
    string s1, s2;
    cin >> T;
    while (T--)
    {
        cin >> N;
        while (N--)
        {
            cin >> s1 >> s2;
            m[s2]++;
        }

        long long ans = 0;

        for (int i = 0; i < m.size(); i++)
        {
            auto it = m.begin();
            long long tmp = 0;
            for (advance(it, i); it != m.end(); it++)
                tmp = (tmp ? tmp : 1) * (*it).second + tmp;
            ans += tmp;
        }

        cout << ans << '\n';

        m.clear();
    }

    return 0;
}