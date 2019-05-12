#include <iostream>
#include <stdlib.h>
#include <queue>

using namespace std;

typedef struct node
{
    int r, c;
    int state;
    int cnt;
} node;

int N, M, tmp, i, j, x, y, ans = 99999999;
bool arr[50][50];
int pos[4][2] = {{1, 0}, {-1, 0}, {0, 1}, {0, -1}};
int dp[50][50][4];

node *new_node(int r, int c, int state, int cnt)
{
    node *n = (node *)malloc(sizeof(node));
    n->r = r;
    n->c = c;
    n->state = state;
    n->cnt = cnt;
    return n;
}

int main(void)
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    queue<node *> q;
    cin >> N >> M;

    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < M; j++)
        {
            cin >> tmp;
            arr[i][j] = (tmp <= 13);
            for (int k = 0; k < 4; k++)
                dp[i][j][k] = 99999999;
        }
    }

    if (arr[0][0] == false)
    {
        cout << "BAD\n";
        return 0;
    }

    node *n = NULL;
    q.push(new_node(0, 0, 0, 0));

    int r, c, cnt;

    while (!q.empty())
    {
        n = q.front();
        q.pop();
        r = n->r;
        c = n->c;
        cnt = n->cnt;

        if (r == N - 1 && c == M - 1)
        {
            if (n->state == 1 || n->state == 2)
            {
                if (cnt < ans)
                    ans = cnt;
            }
        }

        if (cnt >= ans)
        {
            free(n);
            continue;
        }

        switch (n->state)
        {
        case 0: // 자음
            for (i = 0; i < 4; i++)
            {
                x = r + pos[i][0];
                y = c + pos[i][1];
                if (x >= 0 && x < N && y >= 0 && y < M)
                {
                    if (arr[x][y] == 0) // 모음
                        if (dp[x][y][i] > cnt)
                        {
                            dp[x][y][i] = cnt;
                            q.push(new_node(x, y, 1, cnt + 1));
                        }
                }
            }
            break;
        case 1: // 자음 + 모음
            for (i = 0; i < 4; i++)
            {
                x = r + pos[i][0];
                y = c + pos[i][1];
                if (x >= 0 && x < N && y >= 0 && y < M)
                {
                    if (arr[x][y] == 1) // 자음
                        if (dp[x][y][i] > cnt)
                        {
                            dp[x][y][i] = cnt;
                            q.push(new_node(x, y, 2, cnt));
                        }
                }
            }
            break;
        case 2: // 자음 + 모음 + 자음
            for (i = 0; i < 4; i++)
            {
                x = r + pos[i][0];
                y = c + pos[i][1];
                if (x >= 0 && x < N && y >= 0 && y < M)
                {
                    if (arr[x][y] == 1) // 자음
                    {
                        if (dp[x][y][i] > cnt)
                        {
                            dp[x][y][i] = cnt;
                            q.push(new_node(x, y, 0, cnt));
                        }
                    }
                    else if (arr[x][y] == 0) // 모음
                    {
                        if (dp[x][y][i] > cnt)
                        {
                            dp[x][y][i] = cnt;
                            q.push(new_node(x, y, 1, cnt + 1));
                        }
                    }
                }
            }
            break;
        }
        free(n);
    }
    if (ans != 99999999)
        cout << ans << '\n';
    else
        cout << "BAD\n";

    return 0;
}