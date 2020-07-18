#include <iostream>
#include <vector>
#include <unordered_set>

using namespace std;

int main(void)
{
  iostream::sync_with_stdio(0);
  cin.tie(0);

  int T, N, num;
  cin >> T;

  while (T--)
  {
    unordered_set<int> s;
    cin >> N;
    for (int i = 0; i < 2 * N; i++)
    {
      cin >> num;
      if (s.find(num) == s.end())
      {
        s.insert(num);
        cout << num << ' ';
      }
    }
    cout << '\n';
  }

  return 0;
}