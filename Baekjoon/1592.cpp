#include <iostream>
#include <iterator>
#include <vector>
#include <algorithm>

using namespace std;

int main(void)
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int N, M, L;
    cin >> N >> M >> L;

    vector<int> v(N);
    int cnt = 0;
    while (++v[0] != M)
    {
        if (v[0] % 2)
        {
            auto it = v.begin();
            advance(it, L);
            rotate(v.begin(), it, v.end());
        }
        else
        {
            auto it = v.end();
            advance(it, -1 * L);
            rotate(v.begin(), it, v.end());
        }
        cnt++;
    }

    cout << cnt << '\n';

    return 0;
}