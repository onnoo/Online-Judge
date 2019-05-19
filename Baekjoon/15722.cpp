#include <iostream>

using namespace std;

int pos[4][2] = {{0, 1}, {1, 0}, {0, -1}, {-1, 0}};

int main(void)
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int x = 0, y = 0, xx, yy;
    int N, weight = 1, chk = 0, ans = 1;
    cin >> N;

    for (int i = 0;; i++)
    {
        for (int j = 0; j < weight; j++, ans++)
        {
            x += pos[i % 4][0];
            y += pos[i % 4][1];
            if (ans == N)
            {
                cout << x << " " << y << '\n';
                return 0;
            }
        }

        chk++;
        if (chk == 2)
        {
            weight++;
            chk = 0;
        }
    }

    return 0;
}