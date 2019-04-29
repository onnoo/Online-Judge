#include <iostream>
#include <algorithm>

using namespace std;

int arr[100002];
int dp[2][1000002];

int main(void)
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int N;
    cin >> N;

    for (int i = 0; i < N; i++)
    {
        cin >> arr[i];
    }

    dp[0][0] = arr[0]; // 0행 : 포함했을 때의 최댓값
    dp[1][0] = -9999;  // 1행 : 미포함했을 때의 최댓값

    for (int i = 1; i < N; i++)
    {
        dp[0][i] = max(arr[i], arr[i] + dp[0][i - 1]);
        dp[1][i] = max(dp[0][i - 1], dp[1][i - 1]);
    }

    cout << max(dp[0][N - 1], dp[1][N - 1]) << '\n';

    return 0;
}