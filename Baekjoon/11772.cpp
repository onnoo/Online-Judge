#include <iostream>

using namespace std;

int main(void)
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int N, num, t, n, ans = 0;
    cin >> N;
    while (N--)
    {
        n = 1;
        cin >> num;
        t = num % 10;
        num /= 10;
        for (int i = 0; i < t; i++)
        {
            n *= num;
        }
        ans += n;
    }

    cout << ans << '\n';

    return 0;
}