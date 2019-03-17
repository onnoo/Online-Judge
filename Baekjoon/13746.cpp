#include <iostream>
#include <string>

using namespace std;

int r, c;
char arr[50][50];
int pos[4][2] = {{1, 0}, {-1, 0}, {0, 1}, {0, -1}};

void chk(int x, int y)
{
    for (int i = 0; i < 4; i++)
    {
        int xx = x + pos[i][0];
        int yy = y + pos[i][1];
        if (xx >= 0 && xx < r && yy >= 0 && yy < c)
        {
            if (arr[xx][yy] == 'L' || arr[xx][yy] == 'C')
            {
                arr[xx][yy] = 'W';
                chk(xx, yy);
            }
        }
    }
}

int main(void)
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    cin >> r >> c;

    string s;

    for (int i = 0; i < r; i++)
    {
        cin >> s;
        for (int j = 0; j < c; j++)
            arr[i][j] = s[j];
    }

    int cnt = 0;
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            if (arr[i][j] == 'L')
            {
                cnt++;
                chk(i, j);
            }
        }
    }
    cout << cnt << '\n';

    return 0;
}