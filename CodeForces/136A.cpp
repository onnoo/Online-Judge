#include <iostream>

using namespace std;

int main(void)
{
  iostream::sync_with_stdio(0);
  cin.tie(0);

  int N, num;
  cin >> N;

  int arr[N];
  for (int i = 0; i < N; i++)
  {
    cin >> num;
    arr[num - 1] = i + 1;
  }

  for (auto i : arr)
  {
    cout << i << ' ';
  }
  cout << '\n';

  return 0;
}