#include <iostream>

using namespace std;

int main(void)
{
  iostream::sync_with_stdio(0);
  cin.tie(0);

  int T, a, b;
  cin >> T;

  while (T--)
  {
    cin >> a >> b;
    cout << (b - (a % b)) % b << '\n';
  }

  return 0;
}