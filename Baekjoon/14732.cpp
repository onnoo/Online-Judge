#include <iostream>

using namespace std;

int main(void)
{
    ios_base::sync_with_stdio(false);
    int N, cnt = 0;
    cin >> N;
    bool m[501][501] = {0};

    while (N--)
    {
        int x1, y1, x2, y2;
        cin >> x1 >> y1 >> x2 >> y2;
        for (int i = x1; i < x2; i++)
            for (int j = y1; j < y2; j++)
            {
                if (!m[i][j])
                    cnt++;
                m[i][j] = 1;
            }
    }
    cout << cnt << '\n';

    return 0;
}