#include <iostream>
#include <string>
#include <queue>
#include <utility>

using namespace std;

char arr[50][50];
int pos[4][2] = {{0, 1}, {0, -1}, {1, 0}, {-1, 0}};

int main(void)
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int R, C;
    string s;
    queue<pair<int, int>> water;
    queue<pair<int, int>> dochi;

    cin >> R >> C;

    for (int i = 0; i < R; i++)
    {
        cin >> s;
        for (int j = 0; j < C; j++)
        {
            arr[i][j] = s[j];
            if (s[j] == '*')
                water.push(make_pair(i, j));
            else if (s[j] == 'S')
                dochi.push(make_pair(i, j));
        }
    }

    int water_count, dochi_count, r, c, x, y;
    int cnt = 0;
    while (!dochi.empty())
    {
        water_count = water.size();
        for(int i = 0; i < water_count; i++)
        {
            r = water.front().first;
            c = water.front().second;
            
            for (int j = 0; j < 4; j++)
            {
                x = r + pos[j][0];
                y = c + pos[j][1];

                if (x >= 0 && x < R && y >= 0 && y < C)
                {
                    if (arr[x][y] == '.')
                    {
                        arr[x][y] = '*';
                        water.push(make_pair(x, y));
                    }
                }
            }
            water.pop();
        }

        cnt++;
        dochi_count = dochi.size();
        for(int i = 0; i < dochi_count; i++)
        {
            r = dochi.front().first;
            c = dochi.front().second;
            
            for (int j = 0; j < 4; j++)
            {
                x = r + pos[j][0];
                y = c + pos[j][1];

                if (x >= 0 && x < R && y >= 0 && y < C)
                {
                    if (arr[x][y] == '.')
                    {
                        arr[x][y] = 'S';
                        dochi.push(make_pair(x, y));
                    }
                    if (arr[x][y] == 'D')
                    {
                        cout << cnt << '\n';
                        return 0;
                    }
                }
            }
            dochi.pop();
        }
    }

    cout << "KAKTUS\n";
    return 0;
}