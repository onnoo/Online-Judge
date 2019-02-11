#include <iostream>

using namespace std;

int main(void)
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int N, M, pac = 1001, ea = 1001;
    cin >> N >> M;

    while (M--)
    {
        int ipac, iea;
        cin >> ipac >> iea;
        if (ipac < pac)
            pac = ipac;
        if (iea < ea)
            ea = iea;
    }

    if (pac >= ea * 6)
        cout << ea * N << '\n';
    else
    {
        int ans = pac * (N / 6) + ea * (N % 6);
        if (N % 6 == 0)
            cout << pac * N / 6 << '\n';
        else if (ans < pac * (N / 6 + 1))
            cout << ans << '\n';
        else
            cout << pac * (N / 6 + 1) << '\n';
    }

    return 0;
}