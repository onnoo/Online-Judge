#include <iostream>

using namespace std;

int main(void)
{
  iostream::sync_with_stdio(0);
  cin.tie(0);

  int q, n;
  cin >> q;
  while (q--)
  {
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
      cin >> arr[i];
    }

    for (int i = 0; i < n; i++)
    {
      int ans = 1, idx = arr[i];
      while(i != (idx - 1))
      {
        idx = arr[idx - 1];
        ans++;
      }
      cout << ans << ' ';
    }
    cout << '\n';
  }

  return 0;
}