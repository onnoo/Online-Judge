#include <iostream>

using namespace std;

int dp[51] = {1, 1};

int main(void)
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int N;
    cin >> N;

    for (int i = 2; i <= N; i++)
        dp[i] = (dp[i - 2] + dp[i - 1] + 1) % 1000000007;

    cout << dp[N] << '\n';

    return 0;
}