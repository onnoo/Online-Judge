#include <iostream>
#include <map>
#include <utility>

using namespace std;

int main(void)
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int T, N, M;
    unsigned long long ans;
    cin >> T;

    while (T--)
    {
        cin >> N >> M;
        ans = 1;
        cout << ans + M * (N - M) << '\n';
    }

    return 0;
}
