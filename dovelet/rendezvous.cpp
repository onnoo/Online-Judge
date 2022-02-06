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
    int a, b, acc_a, acc_b;

    cin >> a >> b;
    int gcd_val = gcd(a, b);

    cout << a / gcd_val + b / gcd_val << '\n';

    return 0;
}
