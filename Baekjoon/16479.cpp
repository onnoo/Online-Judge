#include <iostream>
#include <stdlib.h>

using namespace std;

int main(void)
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int D1, D2, K;
    cin >> K >> D1 >> D2;

    double M = abs(D1 - D2) / 2.0;
    double h = K * K - M * M;
    cout << h + 1e-9 << '\n';

    return 0;
}