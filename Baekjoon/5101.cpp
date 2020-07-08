#include <iostream>

using namespace std;

int main(void)
{
  iostream::sync_with_stdio(0);
  cin.tie(0);

  int a, d, v, cnt;
  cin >> a >> d >> v;

  while (!(a == 0 && d == 0 && v == 0))
  {
    if (d < 0)
    {
      if (v > a || (v - a) % d != 0)
      {
        cout << "X\n";
      }
      else
      {
        cout << (v - a) / d + 1 << '\n';
      }
    }
    else
    {
      if (v < a || (v - a) % d != 0)
      {
        cout << "X\n";
      }
      else
      {
        cout << (v - a) / d + 1 << '\n';
      }
    }
    cin >> a >> d >> v;
  }


  return 0;
}