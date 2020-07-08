#include <iostream>
#include <algorithm>

using namespace std;

int main(void)
{
  iostream::sync_with_stdio(0);
  cin.tie(0);

  int arr[4];
  for (int i = 0; i < 4; i++)
    cin >> arr[i];
  
  sort(arr, arr + 4);
  cout << abs((arr[3] + arr[0]) - (arr[2] + arr[1])) << '\n';

  return 0;
}