#include <iostream>

using namespace std;

int main(void)
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int T, N, K;
    cin >> T;
    while (T--)
    {
        cin >> N >> K;
        int **dp = (int **)malloc(sizeof(int *) * (N + 1));
        for (int i = 0; i <= N; i++)
            dp[i] = (int *)calloc(K + 1, sizeof(int));

        dp[0][0] = 1;
        if (N >= 1)
            dp[1][0] = 2;
        if (N >= 2)
        {
            dp[2][0] = 3;
            dp[2][1] = 1;
        }
        for (int i = 3; i <= N; i++)
        {
            for (int j = 0; j < i && j <= K; j++)
            {
                if (j == i - 1)
                    dp[i][j] = 1;
                else
                {
                    dp[i][j] += dp[i - 1][j];
                    for (int k = 0; k <= j; k++)
                        dp[i][j] += dp[i - k - 2][j - k];
                }
            }
        }
        cout << dp[N][K] << '\n';
    }

    return 0;
}