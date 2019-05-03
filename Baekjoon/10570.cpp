#include <iostream>
#include <map>
#include <vector>
#include <algorithm>
#include <utility>

using namespace std;

int comp(const pair<int, int> a, const pair<int, int> b)
{
    if (a.second == b.second)
        return a.first < b.first;
    return a.second > b.second;
}

int main(void)
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int N, V, S;
    map<int, int> m;
    vector<pair<int, int>> v;

    cin >> N;
    while (N--)
    {
        m.clear();
        v.clear();
        cin >> V;
        while (V--)
        {
            cin >> S;
            m[S]++;
        }
        for (auto it = m.begin(); it != m.end(); ++it)
        {
            v.push_back(*it);
        }
        sort(v.begin(), v.end(), comp);
        cout << v[0].first << '\n';
    }

    return 0;
}