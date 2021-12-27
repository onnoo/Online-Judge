#include <iostream>

using namespace std;

int main(void) {

    int n;
    cin >> n;

    if (n < 4) {
        cout << 0 << '\n';
    } else {
        cout << (n-1)*(n-2)*(n-3) / 6 << '\n';
    }

    return 0;
}