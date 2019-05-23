#include <iostream>

using namespace std;

bool arr[100][100];

int main(void)
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int N;

    cin >> N;

    // 플로이드 와샬 알고리즘
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            cin >> arr[i][j];
        }
    }

    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            for (int k = 0; k < N; k++)
            {
                if (arr[j][i] && arr[i][k])
                    arr[j][k] = true;
            }
        }
    }

    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            cout << arr[i][j] << ' ';
        }
        cout << '\n';
    }

    return 0;
}