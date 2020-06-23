#include <iostream>
#include <string>
#include <vector>
#include <queue>

using namespace std;

int main(void) {
  ios_base::sync_with_stdio(0);
  cin.tie(0);

  int N, M, tmp, a, b;
  cin >> N;

  int arr[N + 1];
  
  arr[0] = 0;
  for (int i = 1; i <= N; i++)
  {
    cin >> tmp;
    arr[i] = arr[i - 1] + tmp;
  }

  cin >> M;

  for (int i = 0; i < M; i++)
  {
    cin >> a >> b;
    cout << (arr[b] - arr[a - 1]) << '\n';
  }

  return 0;
}