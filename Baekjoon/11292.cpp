#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
#include <utility>

using namespace std;

typedef pair<double, int> pdi;

int comp(pdi a, pdi b)
{
    if (a.first == b.first)
        return a.second < b.second;
    return a.first > b.first;
}

int main(void)
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int N;
    cin >> N;

    vector<string> names;
    vector<pdi> v;
    while (N)
    {
        for (int i = 0; i < N; i++)
        {
            string s;
            double h;
            cin >> s >> h;
            names.push_back(s);
            v.push_back(make_pair(h, i));
        }
        sort(v.begin(), v.end(), comp);

        double max = v[0].first;
        for (int i = 0; v[i].first == max; i++)
            cout << names[v[i].second] << '\n';

        v.clear();
        names.clear();
        cin >> N;
    }
    return 0;
}