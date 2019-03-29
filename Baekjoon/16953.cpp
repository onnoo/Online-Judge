#include <iostream>

using namespace std;

int main(void)
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int N, M, cnt = 0;
    cin >> N >> M;

    while (M > 0)
    {
        if (M == N)
            break;
        if (M % 10 == 1)
            M /= 10;
        else if (M % 2 == 0)
            M /= 2;
        else
            break;
        cnt++;
    }

    cout << (M == N ? cnt + 1 : -1) << '\n';

    return 0;
}