#include <iostream>
#include <vector>

using namespace std;

typedef long long ll;

ll mul[32];
ll n, ans;

void dfs(ll a, ll b)
{
  if (b != 0 && !mul[b])
  {
    mul[b] = mul[b - 1] * 3;
  }
  if (b > 31)
    return;

  if (a >= n)
  {
    if (a < ans)
    {
      ans = a;
    }
  }
  else
  {
    dfs(a + mul[b], b + 1);
    dfs(a, b + 1);
  }
}

int main(void)
{
  int q;
  mul[0] = 1;
  cin >> q;

  while (q--)
  {
    cin >> n;
    ans = 20000;
    dfs(0, 0);
    cout << ans << '\n';
  }
  return 0;
}