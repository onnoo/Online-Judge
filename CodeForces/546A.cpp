#include <iostream>

using namespace std;

int main(void)
{
  iostream::sync_with_stdio(0);
  cin.tie(0);

  int k, n, w, answer = 0;
  cin >> k >> n >> w;

  answer = max(0, k * (w * (w + 1) / 2) - n);
  cout << answer << '\n';

  return 0;
}