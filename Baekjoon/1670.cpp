#include <iostream>

using namespace std;

int main(void)
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int N;
    cin >> N;

    unsigned long long dp[10002], tmp;
    dp[0] = 1;
    dp[2] = 1;

    for (int i = 4; i <= N; i += 2, tmp = 0)
    {
        for (int j = 0; j < i; j += 2)
        {
            tmp = (tmp + dp[j] * dp[i - j - 2]) % 987654321;
        }
        dp[i] = tmp;
    }

    cout << dp[N] << '\n';    

    return 0;
}