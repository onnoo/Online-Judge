#include <iostream>

using namespace std;

int main(void)
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    unsigned long long A, B, C, ans = 1;
    cin >> A >> B >> C;

    while (B > 0)
    {
        if (B % 2 == 1)
        {
            ans *= A;
            B--;
        }
        A *= A;
        A %= C;
        ans %= C;
        B /= 2;
    }

    cout << ans << '\n';

    return 0;
}

// 100000000000