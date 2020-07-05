#include <iostream>

using namespace std;

int main(void)
{
  iostream::sync_with_stdio(0);
  cin.tie(0);

  int k, r, cnt = 1, cum;
  cin >> k >> r;
  cum = k;

  for (int i = 1; i <= 10; i++)
  {
    cum %= 10;
    if (cum == 0 || cum == r)
    {
      cout << cnt << '\n';
      break;
    }
    cnt++;
    cum += k;
  }

  return 0;
}