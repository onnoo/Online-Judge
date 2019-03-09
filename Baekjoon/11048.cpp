#include <iostream>
#include <algorithm>

using namespace std;

int N, M;
int arr[1000][1000];
int dp[1000][1000];
bool chk[1000][1000];

int search(int r, int c)
{
    if (!(r < N && c < M))
        return 0;
    if (chk[r][c])
        return dp[r][c];
    else
    {
        chk[r][c] = true;
        return dp[r][c] = arr[r][c] + max(search(r + 1, c), search(r, c + 1));
    }
}

int main(void)
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    cin >> N >> M;

    for (int i = 0; i < N; i++)
        for (int j = 0; j < M; j++)
            cin >> arr[i][j];

    cout << search(0, 0) << '\n';

    return 0;
}