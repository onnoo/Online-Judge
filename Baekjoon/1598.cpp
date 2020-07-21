#include <iostream>

using namespace std;

int pos_x(int a)
{
  a %= 4;
  if (a == 0)
    return 4;
  else
    return a;
}

int pos_y(int a)
{
  return (a - 1) / 4;
}

int main(void)
{
  iostream::sync_with_stdio(0);
  cin.tie(0);

  int A, B, t1, t2;
  cin >> A >> B;

  t1 = abs(pos_x(A) - pos_x(B));
  t2 = abs(pos_y(A) - pos_y(B));

  cout << t1 + t2 << '\n';

  return 0;
}