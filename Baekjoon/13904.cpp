#include <iostream>
#include <list>
#include <utility>
#include <algorithm>

using namespace std;

int main(void)
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int N;
    cin >> N;

    list<pair<int, int>> v;
    int idx = 0;
    while (N--)
    {
        int d, w;
        cin >> d >> w;
        if (idx < d)
            idx = d;
        v.emplace_back(make_pair(w, d));
    }
    v.sort(greater<pair<int, int>>());

    int sum = 0;
    while (idx)
    {
        for (auto it = v.begin(); it != v.end(); ++it)
        {
            if ((*it).second >= idx)
            {
                sum += (*it).first;
                v.erase(it);
                break;
            }
        }
        idx--;
    }

    cout << sum << '\n';

    return 0;
}