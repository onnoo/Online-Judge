#include <iostream>
#include <cstdlib>

using namespace std;

int main(void)
{
    long long X, Y, W, S, ans;

    cin >> X >> Y >> W >> S;
    X = abs(X); Y = abs(Y);
    if (X < Y)
    {
        X^=Y^=X^=Y;
    }

    if (W + W < S)
    {
        ans = (X + Y) * W;
    }
    else
    {
        // Move square
        ans = Y * S;
        X = X - Y;
        // Move line
        if (W + W > S + S)
        {
            ans += (X % 2) * W;
            X -= (X % 2);
            ans += (X / 2) * (S + S);
        }
        else
        {
            ans += X * W;
        }
    }
    cout << ans << '\n';

    return 0;
}