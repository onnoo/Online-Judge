#include <iostream>
#include <string>
#include <vector>
#include <queue>

using namespace std;

int main(void) {
  ios_base::sync_with_stdio(0);
  cin.tie(0);

  int N, M;
  long long sum = 0;
  cin >> N >> M;
  
  int arr[N + 1];
  int* div = (int *)calloc(M, sizeof(int));

  arr[0] = 0; div[0] = 1;
  for (int i = 1; i <= N; i++)
  {
    cin >> arr[i];
    arr[i] = (arr[i] + arr[i - 1]) % M;
    sum += div[arr[i]]++;
  }

  cout << sum << '\n';

  return 0;
}