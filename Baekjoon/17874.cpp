#include <iostream>

using namespace std;

int main(void)
{
  iostream::sync_with_stdio(0);
  cin.tie(0);

  int N, H, V;
  cin >> N >> H >> V;

  cout << max(N - H, H) * max(N - V, V) * 4 << '\n';

  return 0;
}