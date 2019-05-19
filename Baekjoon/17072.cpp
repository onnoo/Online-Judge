#include <iostream>

using namespace std;

int arr[401][401];
int weight[3] = {2126, 7152, 722};

int main(void)
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int N, M, num;
    cin >> N >> M;

    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < M; j++)
        {
            for (int k = 0; k < 3; k++)
            {
                cin >> num;
                arr[i][j] += weight[k] * num;
            }
        }
    }

    char c;
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < M; j++)
        {
            if (arr[i][j] >= 2040000)
                c = '.';
            else if (arr[i][j] >= 1530000)
                c = '-';
            else if (arr[i][j] >= 1020000)
                c = '+';
            else if (arr[i][j] >= 510000)
                c = 'o';
            else
                c = '#';
            cout << c;
        }
        cout << '\n';
    }
    return 0;
}