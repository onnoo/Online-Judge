#include <iostream>
#include <vector>
#include <algorithm>
#include <utility>

using namespace std;

int main(void) {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int N, L, K, sub1, sub2;
    vector<int> v;
    cin >> N >> L >> K;

    for (int i = 0; i < N; i++)
    {
        cin >> sub1 >> sub2;
        if (sub1 <= L)
        {
            if (sub2 <= L)
                v.push_back(140);
            else
                v.push_back(100);
        }
    }

    sort(v.begin(), v.end(), greater<int>());

    int sum = 0, j = 0;
    for (int i : v)
    {
        if (++j > K)
            break;
        sum += i;
    }

    cout << sum << '\n';

    return 0;
}