#include <iostream>

using namespace std;

int main(void)
{
  iostream::sync_with_stdio(0);
  cin.tie(0);

  int M, N;
  cin >> M >> N;
  if (M % 2 == 0)
  {
    cout << (M / 2) * N << '\n';
  }
  else
  {
    cout << int(M / 2) * N + int(N / 2) << '\n';
  }

  return 0;
}