#include <iostream>
#include <cmath>

using namespace std;

int dp[2][301];

int main(void)
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int N;
    cin >> N;
    int arr[N];
    arr[0] = 0;
    for (int i = 1; i <= N; i++)
        cin >> arr[i];

    dp[0][1] = arr[1];
    dp[1][1] = arr[1];
    for (int i = 2; i <= N; i++)
    {
        // 0 : 두칸을 뛰어서 이 계단을 밟음
        dp[0][i] = arr[i] + max(dp[0][i - 2], dp[1][i - 2]);
        // 1 : 한칸을 뛰어서 이 계단을 밟음
        dp[1][i] = arr[i] + dp[0][i - 1];
    }

    cout << max(dp[0][N], dp[1][N]) << '\n';

    return 0;
}