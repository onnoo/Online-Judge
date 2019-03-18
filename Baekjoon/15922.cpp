#include <iostream>
#include <string>

using namespace std;

int main(void)
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int N, sum = 0, prev_y, x, y, tmp;
    cin >> N;

    cin >> x >> y;
    prev_y = y;
    tmp = y - x;

    for (int i = 1; i < N; i++)
    {
        cin >> x >> y;
        if (prev_y <= x)
        {
            sum += tmp;
            tmp = y - x;
            prev_y = y;
        }
        else if (prev_y < y)
        {
            tmp -= (prev_y - x);
            tmp += y - x;
            prev_y = y;
        }
    }
    sum += tmp;

    cout << sum << '\n';

    return 0;
}