#include <iostream>

using namespace std;

int main(void)
{
  iostream::sync_with_stdio(0);
  cin.tie(0);

  int X, Y;
  cin >> X >> Y;

  int diff = Y - X, answer = 1;

  answer += X / diff + (X % diff > 0);

  cout << answer << '\n';

  return 0;
}