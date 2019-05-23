#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(void)
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int N;
    cin >> N;
    vector<int> v(N);
    vector<int> L;

    for (int i = 0; i < N; i++)
    {
        cin >> v[i];
    }

    for (int i = 0; i < N; i++)
    {
        if (L.empty() || L.back() < v[i])
        {
            L.push_back(v[i]);
        }
        else
        {
            auto it = lower_bound(L.begin(), L.end(), v[i]);
            *it = v[i];
        }
    }

    cout << L.size() << '\n';

    return 0;
}