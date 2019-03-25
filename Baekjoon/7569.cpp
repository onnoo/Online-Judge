#include <iostream>
#include <queue>

using namespace std;

typedef struct pos
{
    int x, y, z, day;
} pos;

pos *new_pos(int x, int y, int z, int day)
{
    pos *p = (pos *)malloc(sizeof(pos));
    p->x = x;
    p->y = y;
    p->z = z;
    p->day = day;
    return p;
}

int mov[6][3] = {{0, 0, 1},
                 {0, 0, -1},
                 {0, 1, 0},
                 {0, -1, 0},
                 {1, 0, 0},
                 {-1, 0, 0}};

int main(void)
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int M, N, H;
    cin >> M >> N >> H;
    int arr[H][N][M];

    queue<pos *> q;
    for (int i = 0; i < H; i++)
    {
        for (int j = 0; j < N; j++)
        {
            for (int k = 0; k < M; k++)
            {
                cin >> arr[i][j][k];
                if (arr[i][j][k] == 1)
                    q.push(new_pos(k, j, i, 0));
            }
        }
    }

    int ans = 0;
    pos *p = NULL;
    while (!q.empty())
    {
        p = q.front();
        q.pop();
        if (ans < p->day)
            ans = p->day;

        int x, y, z;
        for (int i = 0; i < 6; i++)
        {
            x = p->x + mov[i][0];
            y = p->y + mov[i][1];
            z = p->z + mov[i][2];
            if (x >= 0 && x < M && y >= 0 && y < N && z >= 0 && z < H)
            {
                if (arr[z][y][x] == 0)
                {
                    arr[z][y][x] = 1;
                    q.push(new_pos(x, y, z, p->day + 1));
                }
            }
        }
        free(p);
    }

    for (int i = 0; i < H; i++)
    {
        for (int j = 0; j < N; j++)
        {
            for (int k = 0; k < M; k++)
            {
                if (arr[i][j][k] == 0)
                {
                    cout << -1 << '\n';
                    return 0;
                }
            }
        }
    }

    cout << ans << '\n';
    return 0;
}