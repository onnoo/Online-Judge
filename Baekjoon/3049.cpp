#include <iostream>

using namespace std;

int dp[101][101];

int recur(int a, int b)
{
    if (dp[a][b] != 0)
        return dp[a][b];
    if (b == 0 || a == b)
        return dp[a][b] = 1;
    else
    {
        return dp[a][b] = recur(a - 1, b - 1) + recur(a - 1, b);
    }
}

int main(void)
{
    int N;
    cin >> N;
    cout << recur(N, 4) << '\n';
    return 0;
}

// nC4
