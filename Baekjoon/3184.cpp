#include <iostream>
#include <string>

using namespace std;

int R, C;
int sheep, wolf;
char arr[252][252];
int mv[4][2] = {{0, 1}, {0, -1}, {1, 0}, {-1, 0}};

void dfs(int r, int c)
{
  if (arr[r][c] == 'o')
    sheep++;
  else if (arr[r][c] == 'v')
    wolf++;
  arr[r][c] = '#';

  int x, y;
  for (int i = 0; i < 4; i++)
  {
    x = r + mv[i][0];
    y = c + mv[i][1];
    if (0 <= x && x < R && 0 <= y && y < C)
    {
      if (arr[x][y] != '#')
      {
        dfs(x, y);
      }
    }
  }
}

int main(void)
{
  iostream::sync_with_stdio(0);
  cin.tie(0);

  int answer[2] = {0, 0};
  cin >> R >> C;
  for (int i = 0; i < R; i++)
  {
    cin >> arr[i];
  }

  for (int i = 0; i < R; i++)
  {
    for (int j = 0; j < C; j++)
    {
      if (arr[i][j] == 'o' || arr[i][j] == 'v')
      {
        sheep = 0;
        wolf = 0;
        dfs(i, j);
        if (sheep > wolf)
          answer[0] += sheep;
        else
          answer[1] += wolf;
      }
    }
  }

  cout << answer[0] << ' ' << answer[1] << '\n';

  return 0;
}