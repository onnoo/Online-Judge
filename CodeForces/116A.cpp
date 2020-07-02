#include <iostream>

using namespace std;

int main(void)
{
  iostream::sync_with_stdio(0);
  cin.tie(0);
  
  int N, in, out, cap = 0, answer = 0;

  cin >> N;
  while (N--)
  {
    cin >> out >> in;
    cap -= out;
    cap += in;
    answer = max(answer, cap);
  }

  cout << answer << '\n';

  return 0;
}