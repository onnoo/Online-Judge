#include <iostream>

using namespace std;

int dp[11][101];

int main(void)
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int N;
    cin >> N;

    for (int i = 0; i < 10; i++)
    {
        dp[i][1] = 1;
    }

    for (int i = 2; i <= N; i++)
    {
        dp[0][i] = dp[1][i - 1];
        for (int j = 1; j < 10; j++)
        {
            dp[j][i] = (dp[j - 1][i - 1] + dp[j + 1][i - 1]) % 1000000000;
        }
    }

    int sum = 0;
    for (int i = 1; i < 10; i++)
    {
        sum = (sum + dp[i][N]) % 1000000000;
    }

    cout << sum << '\n';

    return 0;
}