#include <iostream>
#include <algorithm>

using namespace std;

int main(void)
{
  iostream::sync_with_stdio(0);
  cin.tie(0);

  int arr[3], answer = 0;
  for (int i = 0; i < 3; i++)
    cin >> arr[i];
  
  sort(arr, arr + 3);

  if (arr[0] == arr[2])
    answer = 2;
  else if (arr[2] * arr[2] == (arr[1] * arr[1] + arr[0] * arr[0]))
    answer = 1;
  
  cout << answer << '\n';

  return 0;
}