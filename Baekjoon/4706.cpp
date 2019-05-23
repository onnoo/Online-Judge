#include <iostream>
#include <cmath>

using namespace std;

int main(void)
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    long double A, B, y;
    cin >> A >> B;
    cout << fixed;
    cout.precision(3);

    while (A != 0 || B != 0)
    {
        y = B / A;
        cout << sqrt(1 - y * y) << '\n';
        cin >> A >> B;
    }

    return 0;
}