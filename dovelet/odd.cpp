#include <iostream>
#include <algorithm>

using namespace std;

int main(void) {
    int n, tot, m;
    tot = 0;
    m = -1;
    for (int i = 0; i < 7; i++) {
        cin >> n;
        if (n % 2 == 1) {
            tot += n;
            if (m == -1) {
                m = n;
            } else {
                m = min(m, n);
            }
        }
    }

    if (m == -1) {
        cout << -1 << '\n';
    } else {
        cout << tot << '\n' << m << '\n';
    }
    return 0;
}