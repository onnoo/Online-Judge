#include <iostream>
#include <unordered_set>

using namespace std;

int main(void)
{
  iostream::sync_with_stdio(0);
  cin.tie(0);

  unordered_set<int> s;
  int num;
  for (int i = 0; i < 4; i++)
  {
    cin >> num;
    s.insert(num);
  }

  cout << 4 - s.size() << '\n';

  return 0;
}