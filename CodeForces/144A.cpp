#include <iostream>

using namespace std;

int main(void)
{
  iostream::sync_with_stdio(0);
  cin.tie(0);

  int N, minidx = 0, maxidx = 0;
  cin >> N;
  
  int arr[N];
  for (int i = 0; i < N; i++)
  {
    cin >> arr[i];
    if (arr[minidx] >= arr[i])
    {
      minidx = i;
    }
    if (arr[maxidx] < arr[i])
    {
      maxidx = i;
    }
  }

  int answer = (maxidx - 0) + (N - 1 - minidx);
  if (minidx < maxidx)
    answer--;

  cout << answer << '\n';

  return 0;
}