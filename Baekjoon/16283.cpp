#include <iostream>

using namespace std;

int main(void)
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int a, b, n, w, m;
    cin >> a >> b >> n >> w;

    bool possible = false;
    for (int i = 1; i < n; i++)
    {
        if (i * a + (n - i) * b == w)
        {
            if (!possible)
            {
                m = i;
                possible = true;
            }
            else
            {
                possible = false;
                break;
            }
        }
    }

    if (possible)
        cout << m << ' ' << (n - m) << '\n';
    else
        cout << -1 << '\n';

    return 0;
}