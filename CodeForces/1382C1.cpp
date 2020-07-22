#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;


void op(string &s, int idx)
{
  for (int i = 0; i < idx; i++)
  {
    if (s[i] == '0')
      s[i] = '1';
    else
      s[i] = '0';
  }
  reverse(s.begin(), s.begin() + idx);
}


int main(void)
{
  iostream::sync_with_stdio(0);
  cin.tie(0);

  int T;
  cin >> T;

  while (T--)
  {
    int N;
    string a, b;
    vector<int> answer;
    cin >> N >> a >> b;
    
    for (int i = 0; i < N; i++)
    {
      if (a[0] == b[N - 1 - i])
      {
        answer.push_back(1);
        op(a, 1);
      }
      answer.push_back(N - i);
      op(a, N - i);
    }

    cout << answer.size() << ' ';
    for (int i : answer)
      cout << i << ' ';
    cout << '\n';
  }

  return 0;
}