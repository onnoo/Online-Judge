#include <iostream>
#include <string>
#include <queue>
#include <utility>

using namespace std;

int pos[4][2] = {{1, 0}, {-1, 0}, {0, 1}, {0, -1}};
bool arr[100][100];
// false : 못감
// true  : 감
typedef struct node
{
    int x, y, cnt;
} node;

node *new_node(int x, int y, int cnt)
{
    node *n = (node *)malloc(sizeof(node));
    n->x = x;
    n->y = y;
    n->cnt = cnt;
    return n;
}

int main(void)
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int N, M;
    string s;
    cin >> N >> M;
    for (int i = 0; i < N; i++)
    {
        cin >> s;
        for (int j = 0; j < M; j++)
            arr[i][j] = (s[j] == '1');
    }

    queue<node *> q;
    q.push(new_node(0, 0, 1));
    arr[0][0] = false;

    while (!q.empty())
    {
        int x = q.front()->x;
        int y = q.front()->y;
        int cnt = q.front()->cnt;
        free(q.front());
        q.pop();
        if (x == N - 1 && y == M - 1)
        {
            cout << cnt << '\n';
            return 0;
        }
        for (int i = 0; i < 4; i++)
        {
            int xx = x + pos[i][0];
            int yy = y + pos[i][1];
            if (arr[xx][yy] && xx >= 0 && xx < N && yy >= 0 && yy < M)
            {
                q.push(new_node(xx, yy, cnt + 1));
                arr[xx][yy] = false;
            }
        }
    }

    return 0;
}