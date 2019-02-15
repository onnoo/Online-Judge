#include <iostream>

using namespace std;

int N, M, count = 0;
bool **arr;
bool *chk;

void DFS(int v)
{
    chk[v] = true;
    for (int i = 0; i < N; i++)
        if (arr[v][i] && !chk[i])
        {
            count++;
            DFS(i);
        }
}

int main(void)
{
    ios_base::sync_with_stdio(false);
    cin >> N >> M;

    arr = (bool **)malloc(sizeof(bool *) * N);
    chk = (bool *)calloc(N, sizeof(bool));
    for (int i = 0; i < N; i++)
        arr[i] = (bool *)calloc(N, sizeof(bool));

    for (int i = 0; i < M; i++)
    {
        int from, to;
        cin >> from >> to;
        arr[from - 1][to - 1] = arr[to - 1][from - 1] = true;
    }

    DFS(0);

    cout << count << '\n';

    return 0;
}