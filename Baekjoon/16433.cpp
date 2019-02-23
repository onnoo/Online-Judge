#include <iostream>

using namespace std;

int main(void)
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int N, R, C;
    cin >> N >> R >> C;

    bool flag = (R + C) % 2;

    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
            cout << ((i + j) % 2 == flag ? 'v' : '.');
        cout << '\n';
    }

    return 0;
}