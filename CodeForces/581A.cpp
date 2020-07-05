#include <iostream>

using namespace std;

int main(void)
{
  iostream::sync_with_stdio(0);
  cin.tie(0);

  int a, b;
  cin >> a >> b;
  cout << min(a, b) << ' ' << (max(a, b) - min(a, b)) / 2 << '\n';

  return 0;
}