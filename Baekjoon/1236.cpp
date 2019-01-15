#include <iostream>

using namespace std;

int N, M, count = 0;
bool *row_check;
bool *col_check;

int check(int row, int col)
{
    if (!row_check[row])
    {
        for (int i = 0; i < M; i++)
        {
            if (!col_check[i])
            {
                col_check[i] = true;
                break;
            }
        }
        row_check[row] = true;
        return 1;
    }
    if (!col_check[col])
    {
        for (int i = 0; i < N; i++)
        {
            if (!row_check[i])
            {
                row_check[i] = true;
                break;
            }
        }
        col_check[col] = true;
        return 1;
    }
    return 0;
}

int main(void)
{
    scanf("%d %d", &N, &M);
    char *s = (char *)malloc(sizeof(char) * (M + 1));
    row_check = (bool *)calloc(N, sizeof(bool));
    col_check = (bool *)calloc(M, sizeof(bool));

    for (int i = 0; i < N; i++)
    {
        scanf("%s", s);
        for (int j = 0; j < M; j++)
            if (s[j] == 'X')
            {
                row_check[i] = true;
                col_check[j] = true;
            }
    }

    for (int i = 0; i < N; i++)
        for (int j = 0; j < M; j++)
            count += check(i, j);

    printf("%d\n", count);

    return 0;
}