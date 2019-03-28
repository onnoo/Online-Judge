#include <iostream>

using namespace std;

int main(void)
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int C, K, P, ans = 0;
    cin >> C >> K >> P;

    for (int i = 1; i <= C; i++)
        ans += K * i + P * i * i;
    cout << ans << '\n';

    return 0;
}