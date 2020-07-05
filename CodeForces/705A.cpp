#include <iostream>
#include <string>

using namespace std;

int main(void)
{
  iostream::sync_with_stdio(0);
  cin.tie(0);

  int N;
  string s = "";
  cin >> N;
  for (int i = 0; i < N; i++)
  {
    s += (i % 2 ? "I love" : "I hate");
    if (i != N - 1)
      s += " that ";
  }
  s += " it";

  cout << s << '\n';

  return 0;
}