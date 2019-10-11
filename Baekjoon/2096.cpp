#include <iostream>
#include <algorithm>

using namespace std;

int main(void)
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int N;
    cin >> N;

    int arr[3][N];
    for (int i = 0; i < N; i++)
    {
        cin >> arr[0][i] >> arr[1][i] >> arr[2][i];
    }

    int dp[2][3];

    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            dp[i][j] = arr[j][0];
        }
    }

    int left_min, right_min, left_max, right_max;
    for (int i = 1; i < N; i++)
    {
        left_min = min(dp[0][0], dp[0][1]);
        right_min = min(dp[0][1], dp[0][2]);
        dp[0][0] = arr[0][i] + left_min;
        dp[0][1] = arr[1][i] + min(left_min, right_min);
        dp[0][2] = arr[2][i] + right_min;

        left_max = max(dp[1][0], dp[1][1]);
        right_max = max(dp[1][1], dp[1][2]);
        dp[1][0] = arr[0][i] + left_max;
        dp[1][1] = arr[1][i] + max(left_max, right_max);
        dp[1][2] = arr[2][i] + right_max;
    }
    
    left_max = max(dp[1][0], dp[1][1]);
    right_max = max(dp[1][1], dp[1][2]);
    left_min = min(dp[0][0], dp[0][1]);
    right_min = min(dp[0][1], dp[0][2]);

    cout << max(left_max, right_max) << ' ' << min(left_min, right_min) << '\n';

    return 0;
}