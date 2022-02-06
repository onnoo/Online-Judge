#include <iostream>

using namespace std;

int main(void) {
    int n, k, ans = 0, cnt = 0;
    cin >> n >> k;

    for (int i = 1; i <= 10000; i++) {
        if (n % i == 0) {
            cnt++;
        }
        if (ans == 0 && k == cnt) {
            ans = i;
        }
    }

    cout << ans << '\n';

    return 0;
}