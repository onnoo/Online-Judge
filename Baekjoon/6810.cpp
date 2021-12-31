#include <iostream>

using namespace std;

int main(void) {
    int a, b, c, ans = 91;
    cin >> a >> b >> c;
    ans += a + b * 3 + c;

    cout << "The 1-3-sum is " << ans << '\n';

    return 0;
}