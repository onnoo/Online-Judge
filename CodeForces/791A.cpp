#include <iostream>

using namespace std;

int main(void)
{
  iostream::sync_with_stdio(0);
  cin.tie(0);

  int a, b, answer = 0;
  cin >> a >> b;

  while (a <= b)
  {
    answer++;
    a *= 3;
    b *= 2;
  }

  cout << answer << '\n';

  return 0;
}