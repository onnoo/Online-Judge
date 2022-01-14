#include <iostream>

using namespace std;

int main(void) {
    double x;
    cin >> x;
    cout.precision(11);
    cout << 100.0 / (1.609344 * x) * 3.785411784  << '\n';
    return 0;
}