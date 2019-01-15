#include <iostream>

using namespace std;

int **arr;

int func(int n, int c)
{
    if (arr[n][c] != 0)
        return arr[n][c];
    if (c == 0 || c == n)
        return arr[n][c] = 1;
    return arr[n][c] = func(n - 1, c) + func(n - 1, c - 1);
}

int main(void)
{
    int n, k;
    cin >> n >> k;
    arr = (int **)malloc(n * sizeof(int *));
    for (int i = 0; i < n; i++)
        *(arr + i) = (int *)calloc(n, sizeof(int));
    cout << func(n - 1, k - 1) << '\n';
    return 0;
}