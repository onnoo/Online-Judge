#include <iostream>
#include <cmath>

using namespace std;
typedef long long ll;

ll N, R, C, cnt = 0;

void Z(ll sz, ll row, ll col)
{
    if (sz != 0)
    {
        ll tmp = pow(2, sz - 1);
        if (abs(row - R) >= tmp || abs(col - C) >= tmp)
            cnt += tmp * tmp;
        else
            Z(sz - 1, row, col);

        if (abs(row - R) >= tmp || abs(col + tmp - C) >= tmp)
            cnt += tmp * tmp;
        else
            Z(sz - 1, row, col + tmp);

        if (abs(row + tmp - R) >= tmp || abs(col - C) >= tmp)
            cnt += tmp * tmp;
        else
            Z(sz - 1, row + tmp, col);

        if (abs(row + tmp - R) >= tmp || abs(col + tmp - C) >= tmp)
            cnt += tmp * tmp;
        else
            Z(sz - 1, row + tmp, col + tmp);
    }
    else
    {
        if (row == R && col == C)
            cout << cnt << '\n';
        cnt++;
    }
}

int main(void)
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    cin >> N >> R >> C;
    Z(N, 0, 0);

    return 0;
}