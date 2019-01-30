#include <iostream>
#include <string>
#include <algorithm>
#include <utility>
#include <vector>

using namespace std;

int main(void)
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    vector<pair<int, string>> v;
    int T;
    cin >> T;
    while (T--)
    {
        int N;
        cin >> N;
        while (N--)
        {
            int tmp;
            string s;
            cin >> tmp >> s;
            v.push_back(make_pair(tmp, s));
        }
        sort(v.begin(), v.end());
        cout << v.back().second << '\n';
        v.clear();
    }

    return 0;
}