#include <iostream>
#include <string>
#include <cstring>

using namespace std;

int main(void)
{
  iostream::sync_with_stdio(0);
  cin.tie(0);

  string s;
  cin >> s;
  s[0] = toupper(s[0]);
  cout << s << '\n';

  return 0;
}