#include <iostream>

using namespace std;

int N;
char **arr;

void space(int n, int x, int y)
{
    for (int i = x; i < x + n; i++)
        for (int j = y; j < y + n; j++)
            arr[i][j] = ' ';
}

void stars(int n, int x, int y)
{
    if (n == 1)
        arr[x][y] = '*';
    else
        for (int i = x; i < x + n; i += n / 3)
            for (int j = y; j < y + n; j += n / 3)
            {
                if (i == x + n / 3 && j == y + n / 3)
                    space(n / 3, i, j);
                else
                    stars(n / 3, i, j);
            }
}

int main(void)
{
    cin >> N;
    arr = (char **)malloc(sizeof(char *) * N);
    for (int i = 0; i < N; i++)
        arr[i] = (char *)calloc(N + 1, sizeof(char));
    stars(N, 0, 0);

    for (int i = 0; i < N; i++)
        printf("%s\n", arr[i]);

    return 0;
}