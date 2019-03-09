#include <iostream>
#include <algorithm>

using namespace std;

int N;
int T[16];
int P[16];
int dp[16];

int func(int idx)
{
    if (idx >= N)
        return 0;
    if (dp[idx] != 0)
        return dp[idx];
    else
    {
        if (idx + T[idx] <= N)
            return max(P[idx] + func(idx + T[idx]), func(idx + 1));
        else
            return func(idx + 1);
    }
}

int main(void)
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    cin >> N;
    for (int i = 0; i < N; i++)
        cin >> T[i] >> P[i];

    cout << func(0) << '\n';

    return 0;
}