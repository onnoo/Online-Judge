#include <iostream>

using namespace std;

int arr[100][100] = {0};

int main(void)
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int N, M;
    cin >> N >> M;

    for (int i = 0; i < N; i++)
    {
        int x1, y1, x2, y2;
        cin >> x1 >> y1 >> x2 >> y2;
        for (int x = x1 - 1; x < x2; x++)
            for (int y = y1 - 1; y < y2; y++)
                arr[x][y]++;
    }

    int cnt = 0;
    for (int i = 0; i < 100; i++)
        for (int j = 0; j < 100; j++)
            if (arr[i][j] > M)
                cnt++;

    cout << cnt << '\n';

    return 0;
}