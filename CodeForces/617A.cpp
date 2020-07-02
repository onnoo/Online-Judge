#include <iostream>

using namespace std;

int main(void)
{
  iostream::sync_with_stdio(0);
  cin.tie(0);

  int X;
  cin >> X;

  cout << int(X / 5) + (X % 5 != 0) << '\n';

  return 0;
}