#include <iostream>
#include <algorithm>

using namespace std;

int cycle(int n) {
    int cnt = 1;
    while (n != 1) {
        if (n % 2 == 0) {
            n = n / 2;
        } else {
            n = n * 3 + 1;
        }
        cnt++;
    }
    return cnt;
}

int main(void) {
    int a, b, ans = -1;
    cin >> a >> b;
    
    for (int i = min(a, b); i <= max(a, b); i++) {
        ans = max(cycle(i), ans);
    }
    cout << ans << '\n';

    return 0;
}
