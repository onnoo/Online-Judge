#include <iostream>

using namespace std;

int main(void) {
    int x, k;
    cin >> x >> k;

    k *= 1000;
    x *= 1000;

    if (k + k * 2 + k * 4 <= x) {
        cout << k + k * 2 + k * 4 << '\n';
    } else if (k / 2 + k + k * 2 <= x) { 
        cout << k / 2 + k + k * 2 << '\n';
    } else if (k / 4 + k / 2 + k <= x) {
        cout << k / 4 + k / 2 + k << '\n';
    } else {
        cout << 0 << '\n';
    }

    return 0;
}