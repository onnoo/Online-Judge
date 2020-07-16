#include <iostream>

using namespace std;

int main(void)
{
  iostream::sync_with_stdio(0);
  cin.tie(0);

  int N, M, K;
  cin >> N >> M >> K;

  cout << min(M, K) + min(N-M, N-K) << '\n';

  return 0;
}