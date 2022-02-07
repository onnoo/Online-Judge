#include <iostream>

using namespace std;

int main(void) {
    int N, K, T, ans;
    cin >> N;

    while (N--) {
        ans = 0;
        cin >> K;
        while (K--) {
            cin >> T;
            ans += T - 1;
        }
        ans++;
        cout << ans << '\n';
    }
    return 0;
}
