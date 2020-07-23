#include <iostream>

using namespace std;

int main(void)
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int arr[2][4];

    for (int i = 0; i < 2; i++)
        for (int j = 0; j < 4; j++)
            cin >> arr[i][j];
    
    int pos[4];
    for (int i = 0; i < 4; i++)
    {
        if (i < 2)
            pos[i] = min(arr[0][i], arr[1][i]);
        else
            pos[i] = max(arr[0][i], arr[1][i]);
    }

    int len = max(pos[2] - pos[0], pos[3] - pos[1]);

    cout << len * len << '\n';
    
    return 0;
}