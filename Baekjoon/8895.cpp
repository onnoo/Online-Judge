#include <iostream>

using namespace std;

typedef long long ll;

ll cm[100][100] = {0};
bool bc[100][100] = {0};
ll bm[100][100] = {0};

ll comb(int n, int r)
{
    if (r == 0 || r == n)
        return 1;
    else
        return (cm[n][r] ? cm[n][r] : cm[n][r] = comb(n - 1, r - 1) + comb(n - 1, r));
}

ll block(int n, int h)
{
    if (n < 0)
    {
        return 0;
    }
    else if (n == 0)
    {
        if (h == 0)
            return 1;
        return 0;
    }

    if (h > n)
        return 0;
    
    if (bc[n][h])
        return bm[n][h];

    ll ret = 0, fac = 1;
    int m = n - 1;
    for (int i = 0; i <= m; fac *= ++i)
    {
        ret += comb(m, i) * fac * block(m - i, h - 1);
    }

    bc[n][h] = true;
    return bm[n][h] = ret;
}

int main(void)
{
    int T;
    cin >> T;

    while(T--)
    {
        ll answer = 0;
        int n, l, r, m;
        cin >> n >> l >> r;
        
        m = n - 1;
        for (int i = 0; i <= m; i++)
        {
            answer += comb(m, i) * block(i, l - 1) * block(m - i, r - 1);
        }
        cout << answer << '\n';
    }

    return 0;
}