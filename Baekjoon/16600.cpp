#include <iostream>
#include <cmath>

using namespace std;


int main(void)
{
  iostream::sync_with_stdio(0);
  cin.tie(0);

  long double N;
  cin >> N;

  cout << fixed;
  cout.precision(8);

  cout << sqrtl(N) * 4.0 << '\n';

  return 0;
}