#include <iostream>

using namespace std;

long long dp[36][36];

long long t(int n)
{
    if (n == 0)
        return 1;

    long long ret = 0;
    for (int i = 0; i < n; i++)
    {
        if (dp[i][n - 1 - i] != 0)
            ret += dp[i][n - 1 - i];
        else
        {
            ret += dp[i][n - 1 - i] = t(i) * t(n - 1 - i);
        }
    }
    return ret;
}

int main(void)
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int N;
    cin >> N;

    cout << t(N) << '\n';

    return 0;
}