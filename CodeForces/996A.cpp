#include <iostream>

using namespace std;

int main(void)
{
  iostream::sync_with_stdio(0);
  cin.tie(0);

  int N, answer = 0;
  cin >> N;

  int arr[] = {100, 20, 10, 5, 1};
  for (int i = 0; i < 5; i++)
  {
    answer += N / arr[i];
    N %= arr[i];
  }

  cout << answer << '\n';

  return 0;
}