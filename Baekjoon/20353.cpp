#include <iostream>
#include <cmath>

using namespace std;

int main(void) {
    double a;
    cin >> a;
    cout.precision(15);
    cout << fixed;

    cout << 4.0 * sqrt(a) << '\n';

    return 0;
}