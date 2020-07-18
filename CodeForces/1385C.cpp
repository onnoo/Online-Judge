#include <iostream>
#include <stack>

using namespace std;

int main(void)
{
  iostream::sync_with_stdio(0);
  cin.tie(0);

  int arr[200020];
  int T, N;
  cin >> T;

  while (T--)
  {
    cin >> N;

    for (int i = 0; i < N; i++)
      cin >> arr[i];

    bool flag = true;
    int last = arr[N - 1], ans = 0;

    for (int i = N - 2; i >= 0; i--)
    {
      if (flag)
      {
        if (arr[i] < arr[i + 1])
          flag = false;
      }
      else
      {
        if (arr[i] > arr[i + 1])
        {
          ans = i + 1;
          break;
        }
      }
    }
    cout << ans << '\n';
  }

  return 0;
}