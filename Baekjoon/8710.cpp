#include <iostream>

using namespace std;

int main(void)
{
  iostream::sync_with_stdio(0);
  cin.tie(0);

  int K, W, M, ans = 0;
  cin >> K >> W >> M;

  ans += (W - K) / M;
  if ((W - K) % M)
    ans++;

  cout << ans << '\n';

  return 0;
}