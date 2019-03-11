#include <iostream>
#include <utility>
#include <vector>

using namespace std;

int main(void)
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int N, X, Y, cnt;
    cin >> N;

    vector<pair<int, int>> v;
    for (int i = 0; i < N; i++)
    {
        cin >> X >> Y;
        v.push_back(make_pair(X, Y));
    }

    for (int i = 0; i < N; i++)
    {
        cnt = 1;
        for (int j = 0; j < N; j++)
        {
            if (i == j)
                continue;
            cnt += (v[i].first < v[j].first && v[i].second < v[j].second);
        }
        cout << cnt << ' ';
    }
    cout << '\n';

    return 0;
}