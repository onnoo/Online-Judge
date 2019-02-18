#include <iostream>
#include <queue>

using namespace std;

int N, M, V;
bool **arr;
bool *chk;

void DFS(int v)
{
    cout << v + 1 << ' ';
    chk[v] = true;
    for (int i = 0; i < N; i++)
        if (arr[v][i] && !chk[i])
            DFS(i);
}

void BFS(int v)
{
    queue<int> q;
    q.push(v);
    chk[v] = true;
    while (!q.empty())
    {
        int t = q.front();
        cout << t + 1 << ' ';
        for (int i = 0; i < N; i++)
            if (arr[t][i] && !chk[i])
            {
                q.push(i);
                chk[i] = true;
            }
        q.pop();
    }
}

int main(void)
{
    ios_base::sync_with_stdio(false);
    cin >> N >> M >> V;

    arr = (bool **)malloc(sizeof(bool *) * N);
    for (int i = 0; i < N; i++)
        arr[i] = (bool *)calloc(N, sizeof(N));

    for (int i = 0; i < M; i++)
    {
        int from, to;
        cin >> from >> to;
        arr[from - 1][to - 1] = true;
        arr[to - 1][from - 1] = true;
    }

    chk = (bool *)calloc(N, sizeof(N));
    DFS(V - 1);
    free(chk);
    chk = (bool *)calloc(N, sizeof(N));
    cout << '\n';
    BFS(V - 1);

    return 0;
}