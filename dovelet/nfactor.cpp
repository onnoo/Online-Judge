#include <iostream>

using namespace std;

int main(void) {
    int n, cnt = 0;
    cin >> n;

    for (int i = 1; i <= 10000; i++) {
        if (n % i == 0) {
            cnt++;
        }
    }

    cout << cnt << '\n';

    return 0;
}