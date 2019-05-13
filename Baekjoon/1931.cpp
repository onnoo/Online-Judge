#include <iostream>
#include <vector>
#include <utility>
#include <algorithm>

using namespace std;

typedef pair<int, int> pii;

int main(void)
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int N, tmp = -1, cnt = 0;
    cin >> N;
    vector<pii> v(N);

    for (int i = 0; i < N; i++)
        cin >> v[i].second >> v[i].first;
    sort(v.begin(), v.end());

    for (pii p : v)
    {
        if (p.second >= tmp)
        {
            cnt++;
            tmp = p.first;
        }
    }

    cout << cnt << '\n';

    return 0;
}