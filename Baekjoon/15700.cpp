#include <iostream>

using namespace std;

int main(void)
{
  iostream::sync_with_stdio(0);
  cin.tie(0);
  long long N, M;
  cin >> N >> M;
  if (N % 2 == 0)
  {
    cout << (N / 2) * M << '\n';
  }
  else
  {
    cout << (N / 2) * M + (M / 2) << '\n';
  }
  return 0;
}