#include <iostream>
#include <vector>
#include <algorithm>
#include <utility>

using namespace std;

int N, K, ans;
vector<pair<int, int>> v;
int dp[100][100001];

int main(void)
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    cin >> N >> K;
    for (int i = 0; i < N; i++)
    {
        int W, V;
        cin >> W >> V;
        v.push_back(make_pair(W, V));
    }

    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j <= K; j++)
        {
            if (i == 0)
                dp[i][j] = (j >= v[i].first ? v[i].second : 0);
            else
            {
                if (j >= v[i].first)
                    dp[i][j] = max(v[i].second + dp[i - 1][j - v[i].first], dp[i - 1][j]);
                else
                    dp[i][j] = dp[i - 1][j];
            }
        }
    }

    cout << dp[N - 1][K] << '\n';

    return 0;
}