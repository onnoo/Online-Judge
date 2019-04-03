#include <iostream>
#include <vector>
#include <algorithm>
#include <map>

using namespace std;

auto comp(pair<int, int> a, pair<int, int> b)
{
    if (a.second == b.second)
        return a.first < b.first;
    return a.second > b.second;
}

map<int, int> m;
vector<int> v;
vector<pair<int, int>> mv;

int main(void)
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int N, tmp;
    double sum = 0.0;
    cin >> N;

    for (int i = 0; i < N; i++)
    {
        cin >> tmp;
        m[tmp]++;
        sum += tmp;       // 산술평균
        v.push_back(tmp); // min, max
    }

    for (auto it = m.begin(); it != m.end(); it++)
    {
        mv.push_back(make_pair(it->first, it->second));
    }

    sort(v.begin(), v.end());
    sort(mv.begin(), mv.end(), comp);

    cout << fixed;
    cout.precision(0);

    cout << sum / N + 1e-9 << '\n';
    cout << v[N / 2] << '\n';
    if (mv.size() == 1)
        cout << mv.front().first << '\n';
    else if (mv[0].second == mv[1].second)
        cout << mv[1].first << '\n';
    else
        cout << mv[0].first << '\n';
    cout << v.back() - v.front() << '\n';

    return 0;
}