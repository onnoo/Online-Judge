#include <iostream>
#include <queue>
#include <vector>

using namespace std;

int main(void)
{
  iostream::sync_with_stdio(0);
  cin.tie(0);

  string s;
  priority_queue<char, vector<char>, greater<char>> q;

  cin >> s;
  for (int i = 0; i < s.size(); i += 2)
  {
    q.push(s[i]);
  }

  for (int i = 0; i < s.size(); i += 2)
  {
    s[i] = q.top();
    q.pop();
  }

  cout << s << '\n';

  return 0;
}