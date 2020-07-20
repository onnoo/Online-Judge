#include <iostream>
#include <string>

using namespace std;

int main(void)
{
  iostream::sync_with_stdio(0);
  cin.tie(0);

  string N;
  cin >> N;

  while (N != "0")
  {
    while (N.size() != 1)
    {
      int tmp = 0;
      for (char c : N)
      {
        tmp += (c - '0');
      }
      N = to_string(tmp);
    }
    cout << N << '\n';
    cin >> N;
  }

  return 0;
}