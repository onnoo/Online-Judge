#include <iostream>

using namespace std;

int main(void)
{
  iostream::sync_with_stdio(0);
  cin.tie(0);

  int T, N;
  cin >> T;
  while (T--)
  {
    cin >> N;
    if ((N / 2) % 2)
    {
      cout << "NO\n";
      continue;
    }
    cout << "YES\n";
    int even = 0;
    for (int i = 1; i <= (N / 2); i++)
    {
      even += i * 2;
      cout << i * 2 << ' ';
    }
    for (int i = 1; i < (N / 2); i++)
    {
      even -= (i * 2 - 1);
      cout << (i * 2 - 1) << ' ';
    }
    cout << even << '\n';
  }

  return 0;
}