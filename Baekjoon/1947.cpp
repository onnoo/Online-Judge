#include <iostream>

using namespace std;

long long dp[1000001];

int main(void)
{
    int N;
    cin >> N;
    dp[1] = 0;
    dp[2] = 1;

    for (int i = 3; i <= N; i++)
    {
        dp[i] = (i - 1) * dp[i - 2] + (i - 1) * dp[i - 1];
        dp[i] %= 1000000000;
    }
    cout << dp[N] << '\n';

    return 0;
}