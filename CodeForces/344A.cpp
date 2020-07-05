#include <iostream>

using namespace std;

int main(void)
{
  iostream::sync_with_stdio(0);
  cin.tie(0);

  int N, ans = 1;
  cin >> N;

  int arr[N];
  for (int i = 0; i < N; i++)
  {
    cin >> arr[i];
  }

  for (int i = 1; i < N; i++)
  {
    if (arr[i] != arr[i - 1])
    {
      ans++;
    }
  }
  cout << ans << '\n';

  return 0;
}