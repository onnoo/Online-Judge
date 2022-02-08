#include <iostream>
#include <algorithm>

using namespace std;

int main(void) {
    int n, a, ans = 0;
    cin >> n;

    for (int i = 0; i < n; i++) {
        int arr[6] = {0};
        for (int j = 0; j < 3; j++) {
            cin >> a;
            arr[a - 1]++;
        }
        for (int j = 0; j < 6; j++) {
            if (arr[j] == 3) {
                ans = max(ans, 10000 + (j + 1) * 1000);
            } else if (arr[j] == 2) {
                ans = max(ans, 1000 + (j + 1) * 100);
            } else if (arr[j] == 1) {
                ans = max(ans, (j + 1) * 100);
            }
        }
    }
    cout << ans << '\n';
    return 0;
}
