#include <iostream>

using namespace std;

int main(void) {
    int N, K, S, T, R, tot, ans, cnt;

    cin >> N >> K;

    for (int i = 0; i < K; i++) {
        cin >> S >> T >> R;

        ans = cnt = tot = 0;
        while (tot < N) {
            if (cnt % (T + R) == 0 || cnt % (T + R) < T) {
                tot += S;
            }
            cnt++;
        }
        cout << cnt << '\n';
    }
    return 0;
}
