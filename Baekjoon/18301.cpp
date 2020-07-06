#include <iostream>

using namespace std;

int main(void)
{
  iostream::sync_with_stdio(0);
  cin.tie(0);

  int N1, N2, N12;
  cin >> N1 >> N2 >> N12;
  cout << int((N1 + 1) * (N2 + 1) / (N12 + 1) - 1) << '\n';
  return 0;
}