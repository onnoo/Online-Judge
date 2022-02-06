#include <iostream>

using namespace std;

int main(void) {
    int n;
    cin >> n;

    for (int i = 1; i * i <= n; i++) {
        if (i * i == n) {
            cout << "yes\n";
            return 0;
        }
    }

    cout << "no\n";
    return 0;
}