#include <iostream>

using namespace std;

int main(void)
{
  iostream::sync_with_stdio(0);
  cin.tie(0);

  cout.precision(12);
  cout << fixed;

  int N, sum = 0, num;
  cin >> N;

  for (int i = 0; i < N; i++)
  {
    cin >> num;
    sum += num;
  }

  cout << (double)sum / N << '\n';

  return 0;
}