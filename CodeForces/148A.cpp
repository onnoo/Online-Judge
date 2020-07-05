#include <iostream>

using namespace std;

int main(void)
{
  iostream::sync_with_stdio(0);
  cin.tie(0);

  int a[4], d, ans = 0;
  for (int i = 0; i < 4; i++)
    cin >> a[i];
  cin >> d;

  bool* arr = (bool*)calloc(d + 1, sizeof(bool));
  for (int i = 0; i < 4; i++)
  {
    for (int j = a[i]; j <= d; j += a[i])
    {
      if (!arr[j])
      {
        ans++;
        arr[j] = true;
      }
    }
  }

  cout << ans << '\n';

  return 0;
}