#include <iostream>
#include <algorithm>

using namespace std;

int main(void) {
    int N, tot, ans;
    tot = ans = 0;

    cin >> N;

    int arr[N];
    for (int i = 0; i < N; i++) {
        cin >> arr[i];
        tot += arr[i];
    }

    for (int i = 0; i < N; i++) {
        ans += max(0, arr[i] - (tot / N));
    }

    cout << "The minimum number of moves is " << ans << ".\n";

    return 0;
}
