#include <iostream>

using namespace std;

int main(void)
{
    int tries;
    cin >> tries;

    int M;
    cin >> M;

    float arr[4][4] = {0.0};
    for (int i = 0; i < M; i++)
    {
        char from, to;
        float percent;

        cin >> from;
        cin >> to;
        cin >> percent;

        arr[from - 65][to - 65] = percent;
    }

    float result[4] = {100000.0, 100000.0, 100000.0, 100000.0};

    for (int i = 0; i < tries; i++)
    {
        float tmp_arr[4] = {0.0, 0.0, 0.0, 0.0};
        for (int j = 0; j < 4; j++)
        {
            for (int k = 0; k < 4; k++)
            {
                if (arr[j][k] != 0)
                {
                    int tmp = result[j] * arr[j][k];
                    tmp_arr[k] += tmp;
                    tmp_arr[j] -= tmp;
                }
            }
        }

        for (int j = 0; j < 4; j++)
        {
            result[j] += tmp_arr[j];
        }
    }

    for (int i = 0; i < 4; i++)
    {
        printf("%.2f\n", result[i] / 4.0 / 1000);
    }

    return 0;
}