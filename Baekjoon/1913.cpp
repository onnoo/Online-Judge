#include <iostream>
#include <string>

using namespace std;

int arr[1000][1000];

// int direct[4] = {0, 1, 2, 3} // UP, RIGHT, DOWN, LEFT
// 1, 1, 2, 2, 3, 3, 4, 4, ...

int pos[4][2] = {{-1, 0}, {0, 1}, {1, 0}, {0, -1}};

int main(void)
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int N, T;
    cin >> N >> T;
    bool movable = true;
    int x = N / 2, y = N / 2;
    int direct = 0, move = 1, cnt = 0, num = 1;
    int ans_x, ans_y;
    arr[x][y] = num;
    if (num == T)
    {
        ans_x = x;
        ans_y = y;
    }
    while (movable)
    {
        for (int i = 0; i < move; i++)
        {
            x += pos[direct][0];
            y += pos[direct][1];
            arr[x][y] = ++num;
            if (num == T)
            {
                ans_x = x;
                ans_y = y;
            }
            if (num == N * N)
            {
                movable = false;
                break;
            }
        }
        direct = (direct + 1) % 4;
        if (++cnt == 2)
        {
            move++;
            cnt %= 2;
        }
    }

    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            cout << arr[i][j] << ' ';
        }
        cout << '\n';
    }
    cout << ans_x + 1 << ' ' << ans_y + 1 << '\n';

    return 0;
}