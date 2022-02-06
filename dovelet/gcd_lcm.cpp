#include <iostream>

using namespace std;

int gcd(int a, int b) {
    int c;
    while (b) {
        c = a % b;
        a = b;
        b = c;
    }
    return a;
}

int main(void) {
    int a, b, c;
    cin >> a >> b;

    c = gcd(a, b);
    cout << c << ' ' << a * b / c << '\n';

    return 0;
}