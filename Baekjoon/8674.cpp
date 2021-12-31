#include <iostream>
#include <algorithm>

using namespace std;

int main(void) {
    long long a, b;
    cin >> a >> b;

    if (a % 2 == 0 || b % 2 == 0) {
        cout << 0 << '\n';
    } else {
        cout << min(a, b) << '\n';
    }

    return 0;
}