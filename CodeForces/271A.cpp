#include <iostream>
#include <string>

using namespace std;

int main(void)
{
  iostream::sync_with_stdio(0);
  cin.tie(0);

  int y;
  string s;
  cin >> y;

  while (true)
  {
    s = to_string(++y);
    bool ans = true;
    bool arr[10] = {0};
    for (char c : s)
    {
      int idx = c - '0';
      if (!arr[idx])
      {
        arr[idx] = true;
      }
      else
      {
        ans = false;
        break;
      }
    }
    if (ans)
      break;
  }

  cout << y << '\n';

  return 0;
}