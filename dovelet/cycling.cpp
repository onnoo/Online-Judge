#include <iostream>
#include <algorithm>

using namespace std;

int main(void) {
    int N, ans = 0, prev, next, acc = 0;
    cin >> N >> prev;

    for (int i = 0; i < N - 1; i++) {
        cin >> next;
        if (prev >= next) {
            ans = max(ans, acc);
            acc = 0;
        } else {
            acc += next - prev;
        }
        prev = next;
    }

    ans = max(ans, acc);
    cout << ans << '\n';
    
    return 0;
}
