#include <iostream>

using namespace std;

int main(void) {
    int N, a, k;
    cin >> N;

    for (int i = 1; i * i < N; i++) {
        a = i + 1;
    }

    k = 1;
    for (int i = 1; i < a; i++) {
        k += 2 * i;
    }

    if (a % 2 == 0) {
        if (N < k) {
            cout << (a - (k - N)) << ' ' << a << '\n';
        } else {
            cout << a << ' ' << (a - (N - k)) << '\n';
        }
    } else {
        if (N < k) {
            cout << a << ' ' << (a - (k - N)) << '\n';
        } else {
            cout << (a - (N - k)) << ' ' << a << '\n';
        }
    }

    return 0;
}
