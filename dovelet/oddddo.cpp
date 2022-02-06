#include <iostream>

using namespace std;

int main(void) {
    int n, m, tot = 0;
    cin >> n;

    m = (2 * n) - 1;

    for (int i = 1; i <= m; i += 2) {
        tot += i * (m - i + 1);
    }

    cout << tot << '\n';

    return 0;
}