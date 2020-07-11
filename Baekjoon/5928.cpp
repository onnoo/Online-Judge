#include <iostream>

using namespace std;

int main(void)
{
  iostream::sync_with_stdio(0);
  cin.tie(0);
  int D, H, M, ans, src, dst;
  cin >> D >> H >> M;
  src = 11 * 24 * 60 + 11 * 60 + 11;
  dst = D * 24 * 60 + H * 60 + M;
  ans = dst - src;

  if (ans < 0)
    ans = -1;
  cout << ans << '\n';

  return 0;
}