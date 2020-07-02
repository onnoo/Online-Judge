#include <iostream>
#include <string>
#include <cstring>

using namespace std;

int main(void)
{
  iostream::sync_with_stdio(0);
  cin.tie(0);

  int answer = 0;
  string a, b;
  char ca, cb;
  cin >> a >> b;

  for (int i = 0; i < a.size(); i++)
  {
    ca = toupper(a[i]);
    cb = toupper(b[i]);
    if (ca < cb)
    {
      answer = -1;
      break;
    }
    else if (ca > cb)
    {
      answer = 1;
      break;
    }
  }
  cout << answer << '\n';

  return 0;
}