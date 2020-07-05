#include <iostream>
#include <algorithm>

using namespace std;

int main(void)
{
  iostream::sync_with_stdio(0);
  cin.tie(0);

  int N, answer = 0;
  cin >> N;

  int arr[N];
  for (int i = 0; i < N; i++)
  {
    cin >> arr[i];
  }

  sort(arr, arr + N);

  for (int i = 0; i < N - 1; i++)
  {
    answer += arr[N - 1] - arr[i];
  }

  cout << answer << '\n';

  return 0;
}