#include <iostream>
#include <string>

using namespace std;

int main(void)
{
  iostream::sync_with_stdio(0);
  cin.tie(0);

  bool flag = false;
  int answer = 0, n, cum = 0;
  string s;
  cin >> s;

  int idx = 0;

  for (int i = 0; i <= s.size(); i++)
  {
    if (s[i] == '+' || s[i] == '-' || i == s.size())
    {
      n = stoi(s.substr(idx, i - idx));
      if (idx == 0)
        answer = n;
      else
        answer += (flag ? -1 : 1) * n;
      
      if (s[i] == '-')
        flag = true;
      idx = i + 1;
    }
  }

  cout << answer << '\n';

  return 0;
}