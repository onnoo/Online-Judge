#include <iostream>

using namespace std;

int main(void)
{
  iostream::sync_with_stdio(0);
  cin.tie(0);

  int N, answer = 0;
  char t = 'A';
  string s;
  cin >> N >> s;

  for (auto c : s)
  {
    if (c == t)
    {
      answer++;
    }
    else
    {
      t = c;
    }
  }

  cout << answer << '\n';

  return 0;
}