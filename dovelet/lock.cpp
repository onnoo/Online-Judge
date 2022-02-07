#include <iostream>

using namespace std;

int main(void) {
    int n, a, b, c, ans;
    cin >> n >> a >> b >> c;

    while (!(n == 0 && a == 0 && b == 0 && c == 0)) {
        ans = 0;

        ans += 720;
        ans += ((n - a) <= 0 ? 40 + n - a : n - a) * 9;
        ans += 360;
        ans += ((b - a) <= 0 ? 40 + b - a : b - a) * 9;
        ans += ((b - c) <= 0 ? 40 + b - c : b - c) * 9;

        cout << ans << '\n';

        cin >> n >> a >> b >> c;
    }
    return 0;
}
