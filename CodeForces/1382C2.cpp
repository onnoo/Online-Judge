#include <iostream>
#include <string>
#include <vector>
#include <list>
#include <algorithm>

using namespace std;

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

    list<int> ls;

    for (auto c : a) {
      ls.push_back(c);
    }
    

    int flip = 0;
    char t;
    for (int i = 0; i < N; i++)
    {
      if (flip % 2 == 0)
      {
        t = ls.front();
        if (t == b[N - 1 - i])
        {
          answer.push_back(1);
        }
        answer.push_back(N - i);
        ls.pop_front();
        flip++;
      }
      else
      {
        t = ls.back();
        if (t == '0')
          t = '1';
        else
          t = '0';

        if (t == b[N - 1 - i])
        {
          answer.push_back(1);
        }
        answer.push_back(N - i);
        ls.pop_back();
        flip++;
      }
    }

    cout << answer.size() << ' ';
    for (int i : answer)
      cout << i << ' ';
    cout << '\n';
  }

  return 0;
}