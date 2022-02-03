#include <iostream>

using namespace std;

int main(void) {
    int N, a, b, tot;
    cin >> N;

    while (N--) {
        tot = 0;
        cin >> a >> b;
        while (a > 0) {
            tot += a % 2;
            a /= 2;
        }
        if ((tot + b) % 2 == 0) {
            cout << "Valid\n";
        } else {
            cout << "Corrupt\n";
        }
    }
    return 0;
}