#include <iostream>
#include <algorithm>

using namespace std;

int dp[31][31];

int recur(int a, int b)
{
    if (dp[a][b] != 0)
        return dp[a][b];
    if (b == 0 || b == a)
        return dp[a][b] = 1;

    return dp[a][b] = recur(a - 1, b) + recur(a - 1, b - 1);
}

int main(void)
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int N, M;
    cin >> N >> M;
    cout << recur(M - 1, M - N) << '\n';

    return 0;
}