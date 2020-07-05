#include <iostream>
#include <string>

using namespace std;

int main(void)
{
  iostream::sync_with_stdio(0);
  cin.tie(0);

  int N;
  string s;
  cin >> N >> s;

  bool check[26] = {0};
  for (auto c : s)
  {
    check[tolower(c) - 'a'] = true;
  }
  
  bool answer = true;
  for (int i = 0; i < 26; i++)
  {
    answer = answer && check[i];
  }

  cout << (answer ? "YES" : "NO") << '\n';

  return 0;
}