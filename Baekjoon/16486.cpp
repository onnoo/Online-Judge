#include <iostream>

using namespace std;

int main(void)
{
  iostream::sync_with_stdio(0);
  cin.tie(0);

  double d1, d2;
  cin >> d1 >> d2;

  cout.precision(7);
  cout << fixed;
  cout << d1 * 2 + 2 * 3.141592 * d2 << '\n';
  return 0;
}