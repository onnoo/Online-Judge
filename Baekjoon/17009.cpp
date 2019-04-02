#include <iostream>

using namespace std;

int main(void)
{
    int tmp;
    int score[2] = {0, 0};

    for (int k = 0; k < 2; k++)
        for (int i = 3; i > 0; i--)
        {
            cin >> tmp;
            score[k] += tmp * i;
        }

    if (score[0] > score[1])
        cout << 'A' << '\n';
    else if (score[0] < score[1])
        cout << 'B' << '\n';
    else
        cout << 'T' << '\n';

    return 0;
}