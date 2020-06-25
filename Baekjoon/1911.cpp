#include <iostream>
#include <utility>
#include <algorithm>
#include <vector>

using namespace std;

typedef pair<int, int> pii;

int comp(pii a, pii b)
{
    return a.first < b.first;
}

int main(void)
{
    iostream::sync_with_stdio(0);
    cin.tie(0);

    int N, L, a, b;
    cin >> N >> L;

    vector<pii> v;

    for (int i = 0; i < N; i++)
    {
        cin >> a >> b;
        v.push_back(make_pair(a, b));
    }

    sort(v.begin(), v.end(), comp);

    int dist, left, idx, answer;
    idx = answer = 0;

    for (auto iter = v.begin(); iter != v.end(); iter++)
    {
        iter->first = max(idx, iter->first);
        dist = (iter->second - iter->first);
        if (dist <= 0)
            continue;
        left = (L - dist % L) % L;
        answer += (dist + left) / L;
        idx = iter->second + left;
    }

    cout << answer;

    return 0;
}