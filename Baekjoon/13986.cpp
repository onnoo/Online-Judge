#include <iostream>

using namespace std;

int main(void)
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int N, M;
    cin >> N >> M;

    char arr[N][M + 1];
    for (int i = 0; i < N; i++)
        cin >> arr[i];

    for (int j = M - 1; j >= 0; j--)
    {
        for (int i = N - 1; i >= 0; i--)
        {
            if (arr[i][j] == 'o')
            {
                for (int k = i + 1; k < N && arr[k][j] == '.'; k++)
                {
                    arr[k][j] = 'o';
                    arr[k - 1][j] = '.';
                }
            }
        }
    }

    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < M; j++)
        {
            cout << arr[i][j];
        }
        cout << '\n';
    }

    return 0;
}