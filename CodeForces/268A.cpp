#include <iostream>

using namespace std;

int main(void)
{
  iostream::sync_with_stdio(0);
  cin.tie(0);

  int N, answer = 0;
  cin >> N;

  int arr[N][2];
  int guest[101] = {0};
  for (int i = 0; i < N; i++)
  {
    cin >> arr[i][0] >> arr[i][1];
    guest[arr[i][1]]++;
  }

  for (int i = 0; i < N; i++)
  {
    answer += guest[arr[i][0]];
  }
  cout << answer << '\n';

  return 0;
}