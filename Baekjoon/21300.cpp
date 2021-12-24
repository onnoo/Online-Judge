#include <iostream>

using namespace std;

int main(void) {
    int total = 0, a;
    for (int i = 0; i < 6; i++) {
        cin >> a;
        total += a;
    }
    cout << total * 5 << '\n';

    return 0;
}