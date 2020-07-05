#include <iostream>
#include <queue>

using namespace std;

bool arr[101][101];

int main(void)
{
  iostream::sync_with_stdio(0);
  cin.tie(0);

  int N, A, B, M, x, y;
  cin >> N >> A >> B >> M;
  while (M--)
  {
    cin >> x >> y;
    arr[x][y] = 1;
    arr[y][x] = 1;
  }

  queue<int> q;
  q.push(A);
  int answer = -1, t, cnt = 0, sz;
  while (!q.empty())
  {
    sz = q.size();
    for (int i = 0; i < sz; i++)
    {
      t = q.front();
      q.pop();

      if (t == B)
      {
        answer = cnt;
      }

      for (int i = 1; i <= N; i++)
      {
        if (arr[t][i])
        {
          q.push(i);
          arr[i][t] = 0;
          arr[t][i] = 0;
        }
      }
    }
    cnt++;
  }

  cout << answer << '\n';

  return 0;
}