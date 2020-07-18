#include <iostream>
#include <algorithm>

using namespace std;

int main(void)
{
  iostream::sync_with_stdio(0);
  cin.tie(0);

  int T, arr[3], sol[3], ma, mi;
  cin >> T;

  while (T--)
  {
    for (int i = 0; i < 3; i++)
    {
      cin >> arr[i];
      sol[i] = arr[i];
    }

    sort(sol, sol + 3);

    if (sol[2] != sol[1])
    {
      cout << "NO";
    }
    else
    {
      cout << "YES\n";
      ma = sol[2];
      mi = sol[0];
      if (arr[0] == ma && arr[1] == ma)
      {
        cout << ma << ' ' << mi << ' ' << mi;
      }
      else if (arr[1] == ma && arr[2] == ma)
      {
        cout << mi << ' ' << mi << ' ' << ma;
      }
      else
      {
        cout << mi << ' ' << ma << ' ' << mi;
      }
    }
    cout << '\n';
  }

  return 0;
}