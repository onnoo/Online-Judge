#include <iostream>

using namespace std;

int dp[80001];

int main(void)
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int sum = 0;

    for (int i = 1; i <= 80000; i++)
    {
        if (i % 3 == 0 || i % 7 == 0)
            sum += i;
        dp[i] = sum;
    }

    int T, N;
    cin >> T;
    while (T--)
    {
        cin >> N;
        cout << dp[N] << '\n';
    }

    return 0;
}