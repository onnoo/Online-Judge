#include <iostream>

using namespace std;

int main(void)
{
  iostream::sync_with_stdio(0);
  cin.tie(0);

  int l, r;
  cin >> l >> r;

  if (l == r)
  {
    if (l == 0)
      cout << "Not a moose\n";
    else
      cout << "Even " << 2 * l << '\n';
  }
  else
  {
    cout << "Odd " << 2 * max(l, r) << '\n';
  }

  return 0;
}