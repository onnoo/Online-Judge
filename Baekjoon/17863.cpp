#include <iostream>

using namespace std;

int main(void)
{
  iostream::sync_with_stdio(0);
  cin.tie(0);

  int N;
  cin >> N;

  if (N / 10000 == 555)
    cout << "YES\n";
  else
    cout << "NO\n";

  return 0;
}