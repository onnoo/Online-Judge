#include <iostream>

using namespace std;

int main(void)
{
  iostream::sync_with_stdio(0);
  cin.tie(0);

  int N;
  cin >> N;

  if (N % 2)
  {
    cout << 9 << ' ' << N - 9 << '\n';
  }
  else
  {
    cout << 4 << ' ' << N - 4 << '\n';
  }

  return 0;
}