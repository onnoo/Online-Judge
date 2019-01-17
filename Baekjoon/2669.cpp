#include <iostream>

using namespace std;

int main(void)
{
    bool arr[101][101] = {false};
    int A, B, C, D, count = 0;

    for (int t = 0; t < 4; t++)
    {
        cin >> A >> B >> C >> D;
        for (int i = A; i < C; i++)
        {
            for (int j = B; j < D; j++)
            {
                if (!arr[i][j])
                    count++;
                arr[i][j] = true;
            }
        }
    }
    cout << count << '\n';

    return 0;
}