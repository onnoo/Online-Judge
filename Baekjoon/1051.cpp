#include <iostream>
#include <string>

using namespace std;

int N, M;
int **arr;

int square(int r, int c)
{
    int ret = -1;
    int num = arr[r][c];
    for (int i = r; i < N; i++)
        if (arr[i][c] == num)
        {
            int l = i - r;
            if (c + l < M && arr[r][c + l] == num && arr[i][c + l] == num && (l + 1) * (l + 1) > ret)
                ret = (l + 1) * (l + 1);
        }

    return ret;
}

int main(void)
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    cin >> N >> M;

    arr = (int **)malloc(sizeof(int *) * N);

    for (int i = 0; i < N; i++)
    {
        arr[i] = (int *)malloc(sizeof(int) * M);
        string s;
        cin >> s;
        for (int j = 0; j < M; j++)
            arr[i][j] = s[j] - 48;
    }

    int max = 0;

    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < M; j++)
        {
            int tmp = square(i, j);
            if (tmp > max)
                max = tmp;
        }
    }

    cout << max << '\n';

    return 0;
}