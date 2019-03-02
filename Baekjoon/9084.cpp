#include <iostream>

using namespace std;

int arr[20];
int *dp;

int main(void)
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int T, N, M;
    cin >> T;
    while (T--)
    {
        cin >> N;
        for (int i = 0; i < N; i++)
            cin >> arr[i];
        cin >> M;
        dp = (int *)calloc(M + 1, sizeof(int));
        dp[0] = 1;
        for (int i = 0; i < N; i++)
            for (int j = 1; j <= M; j++)
                if (j - arr[i] >= 0)
                    dp[j] += dp[j - arr[i]];

        cout << dp[M] << '\n';
        free(dp);
    }
    return 0;
}