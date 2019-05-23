#include <iostream>

using namespace std;

int dp[1001][10];

int main(void)
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int N;
    cin >> N;
    for (int i = 0; i < 10; i++)
    {
        dp[1][i] = 1;
    }

    for (int i = 2; i <= N; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            dp[i][j] = dp[i - 1][j];
            if (j > 0)
                dp[i][j] += dp[i][j - 1];
            dp[i][j] %= 10007;
        }
    }

    int ans = 0;
    for (int i = 0; i < 10; i++)
    {
        ans += dp[N][i];
        ans %= 10007;
    }
    cout << ans << '\n';

    return 0;
}