#include <iostream>
#include <string>
#include <cstring>
#include <algorithm>

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
    sort(arr, arr + n);
    int ans = 1, now = 1;
    for (int i = 1; i < n; i++)
    {
      if (arr[i] - arr[i - 1] == 1)
      {
        now++;
        ans = 2;
      }
      else
      {
        now = 1;
      }
    }
    cout << ans << '\n';
  }
  

  return 0;
}