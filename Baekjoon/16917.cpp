#include <iostream>
#include <algorithm>

using namespace std;

int main(void)
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int A, B, C, X, Y, ans = 0;
    cin >> A >> B >> C >> X >> Y;

    if (A + B >= 2 * C)
    {
        ans += min(X, Y) * 2 * C;
        if (X > Y)
            ans += (X - Y) * (A >= 2 * C ? 2 * C : A);
        else
            ans += (Y - X) * (B >= 2 * C ? 2 * C : B);
    }
    else
        ans += X * A + Y * B;

    cout << ans << '\n';
    return 0;
}