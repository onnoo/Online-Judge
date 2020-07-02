#include <iostream>

using namespace std;

int main(void)
{
  iostream::sync_with_stdio(0);
  cin.tie(0);

  int n, answer = 0;
  for (int i = 0; i < 5; i++)
  {
    for (int j = 0; j < 5; j++)
    {
      cin >> n;
      if (n)
      {
        answer = abs(i - 2) + abs(j - 2);
      }
    }
  }
  cout << answer << '\n';

  return 0;
}