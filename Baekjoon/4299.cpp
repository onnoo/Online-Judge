#include <iostream>

using namespace std;

int main(void)
{
  iostream::sync_with_stdio(0);
  cin.tie(0);

  int sum, sub;
  cin >> sum >> sub;
  
  if ((sum + sub) % 2 == 1 || (sum - sub) % 2 == 1 || sum < sub)
  {
    cout << -1 << '\n';
  }
  else
  {
    cout << (sum + sub) / 2 << ' ' << (sum - sub) / 2 << '\n';
  }
  return 0;
}