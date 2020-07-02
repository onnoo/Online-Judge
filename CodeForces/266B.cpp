#include <iostream>
#include <string>

using namespace std;

int main(void)
{
  iostream::sync_with_stdio(0);
  cin.tie(0);

  int n, t;
  string s, tmp;
  cin >> n >> t >> s;

  tmp = s;
  for (int i = 0; i < t; i++)
  {
    for (int j = 1; j < n; j++)
    {
      if (s[j] == 'G' && s[j - 1] == 'B')
      {
        tmp[j - 1] = 'G';
        tmp[j] = 'B';
      }
    }
    s = tmp;
  }
  cout << s << '\n';

  return 0;
}