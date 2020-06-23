#include <iostream>
#include <string>
#include <vector>
#include <queue>
#include <map>
#include <unordered_map>
#include <stack>
#include <algorithm>
#include <utility>

using namespace std;

int main(void) {
  ios_base::sync_with_stdio(0);
  cin.tie(0);

  int T, N;

  cin >> T;

  while (T--)
  {
    cin >> N;
    int arr[N];
    int max = -9999;
    int sum = 0;
    for (int i = 0; i < N; i++)
    {
      cin >> arr[i];
      sum += arr[i];
      if (sum < arr[i])
      {
        sum = arr[i];
      }
      if (max < sum)
      {
        max = sum;
      }
    }
    cout << max << '\n';
  }

  return 0;
}