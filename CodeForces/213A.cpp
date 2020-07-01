#include <iostream>

using namespace std;

int main(void)
{
    iostream::sync_with_stdio(0);
    cin.tie(0);

    int N, a, b, c, ans = 0;
    cin >> N;
    for (int i = 0; i < N; i++)
    {
        cin >> a >> b >> c;
        ans += (a + b + c >= 2);
    }
    cout << ans << '\n';

    return 0;
}