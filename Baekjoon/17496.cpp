#include <iostream>

using namespace std;

int main(void)
{
  iostream::sync_with_stdio(0);
  cin.tie(0);

  int N, T, C, P;
  cin >> N >> T >> C >> P;
  
  cout << C * ((N - 1) / T) * P << '\n';

  return 0;
}