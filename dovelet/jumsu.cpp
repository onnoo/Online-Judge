#include <iostream>

using namespace std;

int main(void) {
    int N, a, acc, ans;
    cin >> N;

    ans = acc = 0;
    for (int i = 0; i < N; i++) {
        cin >> a;
        if (a) {
            ans += ++acc;
        } else {
            acc = 0;
        }
    }
    cout << ans << '\n';
    
    return 0;
}
