#include <iostream>

using namespace std;

int main(void) {
    int N, ans = -1;
    cin >> N;

    for (int i = 0; i <= N / 5; i++) {
        if ((N - 5 * i) % 3 == 0) {
            ans = (ans == -1 ? i + (N - 5 * i) / 3 : min(ans, i + (N - 5 * i) / 3));
        }
    }

    cout << ans << '\n';
    return 0;
}
