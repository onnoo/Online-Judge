#include <iostream>
#include <vector>

using namespace std;

typedef long long ll;

ll mul[39];
ll sum[39][39];
ll n, ans;

ll dfs(ll a)
{
  if (a <= 0)
    return 0;
  for (int i = 0; i < 39; i++)
  {
    if (sum[0][i] >= a)
    {
      return mul[i] + dfs(a - mul[i]);
    }
  }
  return 0;
}

int main(void)
{
  int q;
  mul[0] = 1;
  sum[0][0] = 1;

  for (int i = 1; i < 39; i++)
  {
    mul[i] = mul[i - 1] * 3;
    sum[0][i] = sum[0][i - 1] + mul[i];
  }
  for (int i = 1; i < 39; i++)
  {
    for (int j = i; j < 39; j++)
    {
      sum[i][j] = sum[i - 1][j] - sum[i - 1][i - 1];
    }
  }

  cin >> q;

  while (q--)
  {
    cin >> n;
    cout << dfs(n) << '\n';
  }

  return 0;
}