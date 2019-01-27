#include <iostream>
#include <algorithm>
#include <vector>
#include <utility>

using namespace std;

int main(void)
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int N, K, idx;
    cin >> N;
    long long max = 0, tmp;
    vector<pair<int, int>> h;
    for (int i = 0; i < N; i++)
    {
        idx = i;
        cin >> K;
        while (!h.empty() && h.front().first > K)
        {
            idx = h.front().second;
            if ((tmp = 1LL * h.front().first * (i - h.front().second)) > max)
                max = tmp;
            pop_heap(h.begin(), h.end());
            h.pop_back();
        }
        h.push_back(make_pair(K, h.empty() ? 0 : idx));
        push_heap(h.begin(), h.end());
    }
    while (!h.empty())
    {
        if ((tmp = 1LL * h.front().first * (N - h.front().second)) > max)
            max = tmp;
        pop_heap(h.begin(), h.end());
        h.pop_back();
    }

    cout << max << '\n';

    return 0;
}