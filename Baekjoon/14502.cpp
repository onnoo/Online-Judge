#include <iostream>

using namespace std;

typedef struct pos
{
    int x, y;
} pos;

pos *walls[3];
int search_pos[4][2] = {{-1, 0}, {1, 0}, {0, -1}, {0, 1}};
int N, M, area, ans, tmp;
int arr[8][8], chk[8][8];

pos *new_pos(int i, int j)
{
    pos *p = (pos *)malloc(sizeof(pos));
    p->x = i;
    p->y = j;
    return p;
}

bool next_wall(pos *p, pos *t)
{
    arr[p->x][p->y] = 0;
    for (int i = t->x; i < N; i++)
        for (int j = i == t->x ? t->y + 1 : 0; j < M; j++)
            if (!arr[i][j])
            {
                p->x = i;
                p->y = j;
                arr[i][j] = 1;
                return true;
            }
    return false;
}

bool place()
{
    if (next_wall(walls[2], walls[2]))
    {
        return true;
    }
    else if (next_wall(walls[1], walls[1]))
    {
        if (next_wall(walls[2], walls[1]))
        {
            return true;
        }
        else if (next_wall(walls[0], walls[0]))
        {
            return next_wall(walls[1], walls[0]) && next_wall(walls[2], walls[1]);
        }
    }
    return false;
}

void DFS(int r, int c)
{
    int x, y;
    for (int i = 0; i < 4; i++)
    {
        x = r + search_pos[i][0];
        y = c + search_pos[i][1];
        if (0 <= x && x < N && 0 <= y && y < M && !chk[x][y])
        {
            chk[x][y] = 1;
            area--;
            DFS(x, y);
        }
    }
}

void virus()
{
    area = tmp;
    for (int i = 0; i < N; i++)
        for (int j = 0; j < M; j++)
            chk[i][j] = arr[i][j];

    for (int i = 0; i < N; i++)
        for (int j = 0; j < M; j++)
            if (chk[i][j] == 2)
                DFS(i, j);

    if (ans < area)
        ans = area;

    if (place())
        virus();
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    cin >> N >> M;
    for (int i = 0; i < N; i++)
        for (int j = 0; j < M; j++)
        {
            cin >> arr[i][j];
            if (!arr[i][j])
                area++;
        }

    for (int i = 0; i < 3; i++)
    {
        walls[i] = new_pos(0, -1);
        next_wall(walls[i], walls[0]);
    }
    tmp = area - 3;
    virus();
    cout << ans << '\n';
    return 0;
}