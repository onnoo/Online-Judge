#include <iostream>

using namespace std;

int main(void) {
    int n, a, b, prev = 0, tot = 0;
    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> a >> b;
        tot += a * (b - prev);
        prev = b;
    }

    cout << tot << " miles\n";

    return 0;
}