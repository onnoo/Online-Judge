#include <iostream>

using namespace std;

int main(void)
{
  iostream::sync_with_stdio(0);
  cin.tie(0);

  int N, num;
  bool hard = false;
  cin >> N;
  while (N--)
  {
    cin >> num;
    hard = (num) || hard;
  }

  cout << (hard ? "HARD" : "EASY") << '\n';

  return 0;
}