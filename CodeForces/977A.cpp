#include <iostream>

using namespace std;

int main(void)
{
  iostream::sync_with_stdio(0);
  cin.tie(0);

  int n, k, tmp;
  cin >> n >> k;
  
  while (k--)
  {
    tmp = n % 10;
    if (tmp)
    {
      tmp = min(tmp, k + 1);
      n -= tmp;
      k -= tmp - 1;
    }
    else
    {
      n /= 10;
    }
  }

  cout << n << '\n';

  return 0;
}