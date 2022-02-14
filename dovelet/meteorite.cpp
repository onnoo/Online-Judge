#include <iostream>
#include <algorithm>

using namespace std;

int main(void) {
    long long a, ans = 0, x, y, m;
    int N;
    cin >> N;

    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            cin >> a;
            int y = min(i + 1, N - i);
            int x = min(j + 1, N - j);
            int m = min(x, y);
            ans += a * m;
        }
    }
    cout << ans << '\n';
    return 0;
}

