#include <iostream>

using namespace std;

long long dp[101][101][101];

int main(void)
{
    int N, L, R;
    cin >> N >> L >> R;

    dp[1][1][1] = 1;
    for (int n = 2; n <= N; n++)
    {
        for (int l = 1; l <= L; l++)
        {
            for (int r = 1; r <= R; r++)
            {
                dp[n][l][r] = (dp[n-1][l-1][r] + dp[n-1][l][r-1] + (n-2) * dp[n-1][l][r]) % 1000000007;
            }
        }
    }
    cout << dp[N][L][R] << '\n';

    return 0;
}