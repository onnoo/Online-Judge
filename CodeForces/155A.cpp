#include <iostream>

using namespace std;

int main(void)
{
  iostream::sync_with_stdio(0);
  cin.tie(0);

  int N, answer = 0, low, high, num;
  cin >> N >> num;
  low = high = num;

  for (int i = 1; i < N; i++)
  {
    cin >> num;
    if (num < low)
    {
      low = num;
      answer++;
    }
    if (num > high)
    {
      high = num;
      answer++;
    }
  }

  cout << answer << '\n';

  return 0;
}