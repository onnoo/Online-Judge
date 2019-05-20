#include <iostream>

using namespace std;

int dp[100001] = {0, 1, 1, 2, 2, 1, 2, 1};
int arr[] = {1, 2, 5, 7};

int main(void)
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int N, cnt, num;
    cin >> N;

    for (int i = 8; i <= N; i++)
    {
        cnt = 100000;
        for (int j = 0; j < 4; j++)
        {
            num = dp[arr[j]] + dp[i - arr[j]];
            if (num < cnt)
                cnt = num;
        }
        dp[i] = cnt;
    }

    cout << dp[N] << '\n';

    return 0;
}