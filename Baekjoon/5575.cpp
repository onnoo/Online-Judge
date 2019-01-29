#include <iostream>

using namespace std;

int main(void)
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    for (int t = 0; t < 3; t++)
    {
        int arr[2][3];
        for (int i = 0; i < 2; i++)
            for (int j = 0; j < 3; j++)
                cin >> arr[i][j];
        for (int j = 2; j >= 0; j--)
        {
            arr[1][j] -= arr[0][j];
            if (arr[1][j] < 0)
            {
                arr[1][j - 1]--;
                arr[1][j] += 60;
            }
        }
        for (int i = 0; i < 3; i++)
            cout << arr[1][i] << ' ';
        cout << '\n';
    }

    return 0;
}