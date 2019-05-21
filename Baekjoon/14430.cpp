#include <iostream>

using namespace std;

bool arr[300][300];
int dp[300][300];
int pos[2][2] = {{-1, 0}, {0, -1}};

int main(void)
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int N, M, ans = 0;
    cin >> N >> M;

    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < M; j++)
        {
            cin >> arr[i][j];
        }
    }

    int x, y;
    dp[0][0] = arr[0][0];
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < M; j++)
        {
            for (int k = 0; k < 2; k++)
            {
                x = i + pos[k][0];
                y = j + pos[k][1];
                if (x >= 0 && x < N && y >= 0 && y < M)
                {
                    if (arr[i][j] + dp[x][y] > dp[i][j])
                        dp[i][j] = arr[i][j] + dp[x][y];
                }
            }
        }
    }

    cout << dp[N - 1][M - 1] << '\n';

    return 0;
}