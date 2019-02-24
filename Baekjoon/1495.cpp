#include <iostream>

using namespace std;

bool dp[101][1001];

int main(void)
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int N, S, M, ans;
    cin >> N >> S >> M;

    int arr[N + 1];

    for (int i = 1; i <= N; i++)
        cin >> arr[i];

    dp[0][S] = true;
    bool flag; // 도중에 볼륨 조절이 가능한가
    for (int i = 1; i <= N; i++)
    {
        flag = false;
        for (int j = 0; j <= M; j++)
        {
            if (dp[i - 1][j])
            {
                flag = true;
                if (j + arr[i] <= M)
                    dp[i][j + arr[i]] = true;
                if (j - arr[i] >= 0)
                    dp[i][j - arr[i]] = true;
            }
        }
        if (!flag)
        {
            ans = -1;
            break;
        }
    }

    if (flag)
        for (int i = 0; i <= M; i++)
            if (dp[N][i] && ans < i)
                ans = i;

    cout << ans << '\n';

    return 0;
}