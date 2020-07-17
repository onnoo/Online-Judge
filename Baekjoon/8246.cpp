#include <iostream>

using namespace std;

int main(void)
{
  iostream::sync_with_stdio(0);
  cin.tie(0);

  int A, B, K, answer = 0, t1, t2;
  cin >> A >> B >> K;

  if (K > A || K > B)
  {
    answer = 0;
  }
  else
  {
    answer = (A / K) * (B / K);
    t1 = ((A - 2 * K) / K);
    t2 = ((B - 2 * K) / K);
    if (t1 > 0 && t2 > 0)
      answer -= t1 * t2;
  }

  cout << answer << '\n';

  return 0;
}