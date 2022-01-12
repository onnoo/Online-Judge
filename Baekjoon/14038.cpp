#include <iostream>
#include <string>

using namespace std;

int main(void) {
    int wins = 0;
    string s;
    for (int i = 0; i < 6; i++) {
        cin >> s;
        if (s == "W") {
            wins++;
        }
    }
    if (wins == 0) {
        cout << -1 << '\n';
    } else {
        cout << ((6 - wins) / 2) + 1 << '\n';
    }
    return 0;
}