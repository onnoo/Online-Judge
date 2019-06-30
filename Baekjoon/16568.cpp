#include <iostream>

using namespace std;

int N, a, b, tmp;
int ans = 9999999;

int main(void)
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    cin >> N >> a >> b;

    if (b > a)
    {
        tmp = a;
        a = b;
        b = tmp;
    }
    a++;
    b++;

    for (int i = 0; i <= N / a; i++)
    {
        tmp = N - a * i;
        tmp = i + tmp / b + tmp % b;
        if (tmp < ans)
            ans = tmp;
    }

    cout << ans << '\n';

    return 0;
}