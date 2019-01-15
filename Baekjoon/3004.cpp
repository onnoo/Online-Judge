#include <iostream>
#include <cmath>

using namespace std;

int main(void)
{
    int N;
    cin >> N;

    int max = 0;
    int tmp;
    for (int i = 0; i < N / 2 + 1; i++)
    {
        tmp = (i + 1) * (N - i + 1);
        if (max < tmp)
            max = tmp;
    }

    cout << max << '\n';

    return 0;
}