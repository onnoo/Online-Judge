#include <iostream>

using namespace std;

int main(void)
{
  iostream::sync_with_stdio(0);
  cin.tie(0);

  int N, d, ans;
  cin >> N;
  d = N % 4;
  
  if (d == 0)
    ans = 2;
  else if (d == 2)
    ans = 1;
  else
    ans = 0;
  
  cout << ans << '\n';

  return 0;
}