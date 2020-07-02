#include <iostream>
#include <string>

using namespace std;

int main(void)
{
  iostream::sync_with_stdio(0);
  cin.tie(0);

  int N, x = 0;
  string s;
  cin >> N;

  for (int i = 0; i < N; i++)
  {
    cin >> s;
    if (s.find("++") != string::npos)
    {
      x++;
    }
    else
    {
      x--;
    }
  }
  cout << x << '\n';

  return 0;
}