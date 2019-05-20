#include <iostream>

using namespace std;

int main(void)
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int N;
    bool st;

    double arr[2][2];

    double state[2] = {0.0, 0.0}; // 좋, 싫

    cin >> N >> st;

    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            cin >> arr[i][j];
        }
    }

    state[0] = arr[st][0];
    state[1] = arr[st][1];

    double tmp[2];
    for (int i = 1; i < N; i++)
    {
        tmp[0] = state[0] * arr[0][0] + state[1] * arr[1][0];
        tmp[1] = state[0] * arr[0][1] + state[1] * arr[1][1];

        state[0] = tmp[0];
        state[1] = tmp[1];
    }

    printf("%.0lf\n%.0lf\n", state[0] * 1000 + 1e-9, state[1] * 1000 + 1e-9);

    return 0;
}