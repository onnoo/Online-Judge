#include <iostream>

using namespace std;

int dp[15][15] = {0};

int comb(int n, int r)
{
  if (dp[n][r])
    return dp[n][r];
  if (r == 0 || n == r)
    return 1;
  else
    return dp[n][r] = comb(n - 1, r - 1) + comb(n - 1, r);
}

int main(void)
{
  int T, k, n;
  
  cin >> T;
  while (T--)
  {
    cin >> k >> n;
    cout << comb(n + k, k + 1) << '\n';
  }

  return 0;
}