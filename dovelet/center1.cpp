#include <iostream>

using namespace std;

int main(void) {
    int n, a = 0, b = 0;
    cin >> n;

    for (int i = 1; i < n; i++) {
        a += i;
    }

    for (int i = n + 1; b < a; i++) {
        b += i;
    }

    if (a == b) {
        cout << "O\n";
    } else {
        cout << "X\n";
    }

    return 0;
}