#include <iostream>
#include <vector>

using namespace std;

int main(void)
{
  iostream::sync_with_stdio(0);
  cin.tie(0);

  int T, N, tmp, cnt;
  cin >> T;

  while (T--)
  {
    cin >> N;
    cnt = 0;
    vector<int> v;
    for (int i = 10000; i >= 1; i /= 10)
    {
      tmp = N / i;
      if (tmp)
      {
        cnt++;
        v.push_back(tmp * i);
      }
      N %= i;
    }
    cout << cnt << '\n';
    for (int j : v)
    {
      cout << j << ' ';
    }
    cout << '\n';
  }
  return 0;
}