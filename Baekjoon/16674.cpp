#include <iostream>

using namespace std;

int main(void)
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int a[10] = {0};
    int N;
    cin >> N;

    while (N > 0)
    {
        a[N % 10]++;
        N /= 10;
    }

    bool rel = !(a[3] + a[4] + a[5] + a[6] + a[7] + a[9]);
    bool mil = a[0] && a[1] && a[2] && a[8];
    bool muk = (a[0] == a[1]) && (a[1] == a[2]) && (a[2] == a[8]);

    int ans = rel * (mil ? 2 : 1) * (muk ? 4 : 1);
    cout << ans << '\n';

    return 0;
}