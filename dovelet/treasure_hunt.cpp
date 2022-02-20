#include <iostream>

using namespace std;

int main(void) {
    int x, y, n, k;
    char c;
    cin >> x >> y >> n;

    for (int i = 0; i < n; i++) {
        cin >> k >> c;
        if (c == 'E') {
            x -= k;
        }
        if (c == 'W') {
            x += k;
        }
        if (c == 'S') {
            y += k;
        }
        if (c == 'N') {
            y -= k;
        }
    }

    if (x == 0 && y == 0) {
        cout << "Treasure Found\n";
    } else {
        cout << "Bad Map\n";
    }
    return 0;
}
