#include <iostream>
#include <string>

using namespace std;

int main(void)
{
  iostream::sync_with_stdio(0);
  cin.tie(0);

  int cnt = 0;
  bool check[26] = {0};
  string s;
  
  cin >> s;
  for (auto c : s)
  {
    if (!check[c - 'a'])
    {
      cnt++;
      check[c - 'a'] = true;
    }
  }

  cout << (cnt % 2 ? "IGNORE HIM!" : "CHAT WITH HER!") << '\n';

  return 0;
}