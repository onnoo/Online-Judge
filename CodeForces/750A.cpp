#include <iostream>

using namespace std;

int main(void)
{
  iostream::sync_with_stdio(0);
  cin.tie(0);

  int N, K, answer = 0;
  cin >> N >> K;

  K = 240 - K;
  for (int i = 1; i <= N; i++)
  {
    if (K < 5 * i)
    {
      break;
    }
    K -= 5 * i;
    answer++;
  }

  cout << answer << '\n';

  return 0;
}