#include <iostream>
#include <algorithm>

using namespace std;

int pow(int n, int k) {
    int ret = 1;
    for (int i = 0; i < k; i++) {
        ret *= n;
    }
    return ret;
}

int main(void) {
    int N, K, a, m, ans;
    cin >> N >> K;

    int arr[N];

    cin >> arr[0];
    m = arr[0] = pow(arr[0], K);
    for (int i = 1; i < N; i++) {
        cin >> arr[i];
        arr[i] = pow(arr[i], K);
        m = max(m, arr[i]);
    }

    if (m > 0) {
        ans = 0;
        for (int i = 0; i < N; i++) {
            if (arr[i] > 0) {
                ans += arr[i];
            }
        }
    } else {
        ans = m;
    }

    cout << ans << '\n';

    return 0;
}

