#include <iostream>

using namespace std;

int main(void)
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int L = -1, W = -1, A = -1;
    cin >> L >> W >> A;
    while (!(L == 0 && W == 0 && A == 0))
    {
        if (L == 0)
            cout << (A / W) << ' ' << W << ' ' << A;
        else if (W == 0)
            cout << L << ' ' << (A / L) << ' ' << A;
        else
            cout << L << ' ' << W << ' ' << L * W;
        cout << '\n';
        cin >> L >> W >> A;
    }
    return 0;
}