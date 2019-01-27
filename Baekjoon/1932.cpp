#include <iostream>

using namespace std;

int main(void)
{
    ios_base::sync_with_stdio(false);
    int N;
    int **arr;
    cin >> N;

    arr = (int **)malloc(sizeof(int *) * N);
    for (int i = 0; i < N; i++)
        arr[i] = (int *)calloc(N, sizeof(int));

    for (int i = 0; i < N; i++)
        for (int j = 0; j <= i; j++)
            cin >> arr[i][j];

    for (int i = N - 2; i >= 0; i--)
        for (int j = 0; j <= i; j++)
            arr[i][j] = arr[i][j] + max(arr[i + 1][j], arr[i + 1][j + 1]);

    cout << arr[0][0] << '\n';

    return 0;
}