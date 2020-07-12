#include <iostream>

using namespace std;

int main(void)
{
  iostream::sync_with_stdio(0);
  cin.tie(0);

  int A,B,C,D,E,ans;
  cin >> A >> B >> C >> D >> E;

  if (B < 0)
  {
    ans = (B - A) * C;
  }
  else if (A < 0)
  {
    ans = abs(A) * C + D + B * E;
  }
  else
  {
    ans = (B - A) * E;
  }
  cout << ans << '\n';
  
  return 0;
}