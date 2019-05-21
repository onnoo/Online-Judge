#include <iostream>

using namespace std;

bool arr[6][6];

int main(void)
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    // 엄지(1), 중지(3), 약지(4) 가 만난다 : 1, 3, 4 가 켜져 있다
    // 다른 손가락(2, 5)은 만나지 않는다 : 2, 5는 누구와도 만나지 않는다

    int N, a, b;
    cin >> N;

    while (N--)
    {
        cin >> a >> b;
        arr[a][b] = true;
        arr[b][a] = true;
    }

    bool fox[6] = {0, 1, 0, 1, 1, 0};

    for (int i = 1; i <= 5; i++)
    {
        if (fox[i])
        {
            arr[i][i] = true;
            for (int j = 1; j <= 5; j++)
            {
                if (arr[i][j] != fox[j])
                {
                    cout << "Woof-meow-tweet-squeek\n";
                    return 0;
                }
            }
        }
        else
        {
            for (int j = 1; j <= 5; j++)
            {
                if (arr[i][j] != 0)
                {
                    cout << "Woof-meow-tweet-squeek\n";
                    return 0;
                }
            }
        }
    }

    cout << "Wa-pa-pa-pa-pa-pa-pow!\n";

    return 0;
}