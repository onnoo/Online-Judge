#include <iostream>

using namespace std;

int main(void) {
    int a, b, c, d, n;
    cin >> a >> b >> c >> d;

    for (int i = 0; i < 3; i++) {
        cin >> n;
        bool aa, bb;
        aa = !(n % (a + b) == 0 || n % (a + b) > a);
        bb = !(n % (c + d) == 0 || n % (c + d) > c);
        if (aa && bb) {
            cout << "both\n";
        } else if (aa || bb) {
            cout << "one\n";
        } else {
            cout << "none\n";
        }
    }
    return 0;
}