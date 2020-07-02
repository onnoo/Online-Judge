#include <iostream>

using namespace std;

int main(void)
{
  iostream::sync_with_stdio(0);
  cin.tie(0);

  int N, count = 0, p, q;
  cin >> N;

  while (N--)
  {
    cin >> p >> q;
    count += (q - p >= 2);
  }
  cout << count << '\n';

  return 0;
}