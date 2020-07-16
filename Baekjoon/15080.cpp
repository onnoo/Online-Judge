#include <iostream>

using namespace std;


int main(void)
{
  iostream::sync_with_stdio(0);
  cin.tie(0);

  char del;
  int arr[2][3], answer = 0;

  for (int i = 0; i < 2; i++)
  {
    for (int j = 0; j < 5; j++)
    {
      if (j % 2)
        cin >> del;
      else
        cin >> arr[i][j - j / 2];
    }
  }

  if (arr[0][0] > arr[1][0])
    arr[1][0] += 24;
  answer += (arr[1][0] - arr[0][0]) * 3600;

  if (arr[0][1] > arr[1][1])
  {
    answer -= 3600;
    arr[1][1] += 60;
  }
  answer += (arr[1][1] - arr[0][1]) * 60;

  if (arr[0][2] > arr[1][2])
  {
    answer -= 60;
    arr[1][2] += 60;
  }
  answer += (arr[1][2] - arr[0][2]);

  if (answer < 0)
    answer += 3600 * 24;

  cout << answer << '\n';

  return 0;
}