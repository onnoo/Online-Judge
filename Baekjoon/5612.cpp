#include <iostream>

using namespace std;

int main(void)
{
  iostream::sync_with_stdio(0);
  cin.tie(0);

  int N, tot, ans = 0, a, b;
  cin >> N >> tot;
  ans = tot;

  for (int i = 0; i < N; i++)
  {
    cin >> a >> b;
    tot += (a - b);
    if (ans >= 0 && ans < tot)
    {
      ans = tot;
    }
    if (tot < 0)
    {
      ans = -1;
    }
  }

  if (ans < 0)
    cout << 0 << '\n';
  else
    cout << ans << '\n';

  return 0;
}