#include <iostream>
#include <map>

using namespace std;

int main(void) {

    map<int, int> x, y;

    int a, b;

    for (int i = 0; i < 3; i++) {
        cin >> a >> b;
        if (x.find(a) == x.end()) {
            x[a] = 1;
        } else {
            x[a]++;
        }
        if (y.find(b) == y.end()) {
            y[b] = 1;
        } else {
            y[b]++;
        }
    }

    for (auto it = x.begin(); it != x.end(); it++) {
        if (it->second == 1) {
            cout << it->first << ' ';
        }
    }

    for (auto it = y.begin(); it != y.end(); it++) {
        if (it->second == 1) {
            cout << it->first << '\n';
        }
    }

    return 0;
}
