#include <iostream>

using namespace std;

int main(void)
{
  iostream::sync_with_stdio(0);
  cin.tie(0);

  char year[] = "1723";
  int N;
  cin >> N;

  cout << year[N - 1] << '\n';

  return 0;
}