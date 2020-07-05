#include <iostream>
#include <string>

using namespace std;

int main(void)
{
  iostream::sync_with_stdio(0);
  cin.tie(0);

  string s;

  cin.ignore();
  getline(cin, s);

  int answer = 0;
  bool check[26] = {0};

  for (char c : s)
  {
    if ('a' <= c && c <= 'z')
    {
      if (!check[c - 'a'])
      {
        answer++;
        check[c - 'a'] = true;
      }
    }
  }

  cout << answer << '\n';

  return 0;
}