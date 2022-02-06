#include <iostream>
#include <algorithm>

using namespace std;

int main(void) {
    int a, b;
    cin >> a >> b;

    for (int i = min(a, b); i <= max(a, b); i++) {
        cout << i << ' ';
    }
    cout << '\n';
    return 0;
}