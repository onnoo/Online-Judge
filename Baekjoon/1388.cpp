#include <iostream>
#include <string>

using namespace std;

int N, M;
char **arr;

void check(int row, int col, char c)
{
    if (arr[row][col] == c)
    {
        arr[row][col] = 'X';
        if (c == '|')
        {
            if (row + 1 < N)
                check(row + 1, col, c);
        }
        else
        {
            if (col + 1 < M)
                check(row, col + 1, c);
        }
    }
}

int main(void)
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    cin >> N >> M;
    arr = (char **)malloc(sizeof(char *) * N);

    for (int i = 0; i < N; i++)
    {
        arr[i] = (char *)malloc(sizeof(char) * M);
        string s;
        cin >> s;
        for (int j = 0; j < M; j++)
            arr[i][j] = s[j];
    }

    int cnt = 0;

    for (int i = 0; i < N; i++)
        for (int j = 0; j < M; j++)
            if (arr[i][j] != 'X')
            {
                check(i, j, arr[i][j]);
                cnt++;
            }

    cout << cnt << '\n';

    return 0;
}