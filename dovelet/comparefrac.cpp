#include <iostream>

using namespace std;

int main(void) {
    double a, b, c, d, e, f;
    cin >> a >> b >> c >> d;
    e = a / b;
    f = c / d;
    if (e > f) {
        cout << 1 << '\n';
    } else if (e == f) {
        cout << 0 << '\n';
    } else {
        cout << -1 << '\n';
    }

    return 0;
}