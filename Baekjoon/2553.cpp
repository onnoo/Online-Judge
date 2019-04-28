#include <iostream>
#include <climits>

using namespace std;

int main(void)
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    unsigned long long N, fac = 1;
    cin >> N;

    for (int i = 1; i <= N; i++)
    {
        while (fac % 10 == 0)
        {
            fac /= 10;
        }
        fac *= i;
        while (fac % 10 == 0)
        {
            fac /= 10;
        }
        fac %= 1000000;
    }

    cout << fac % 10 << '\n';

    return 0;
}