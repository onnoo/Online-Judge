#include <iostream>
#include <string>

using namespace std;

int main(void)
{
  iostream::sync_with_stdio(0);
  cin.tie(0);
  
  string s;
  cin >> s;

  int cnt = 0;
  for (char c : s)
  {
    cnt += ((c == '4') || (c == '7'));
  }
  
  if (cnt == 4 || cnt == 7)
    cout << "YES\n";
  else
    cout << "NO\n";

  return 0;
}