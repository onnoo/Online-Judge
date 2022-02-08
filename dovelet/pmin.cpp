#include <iostream>
#include <algorithm>

using namespace std;

int main(void) {
    int N, m;

    cin >> N;

    int arr[N];
    cin >> arr[0];
    m = arr[0];

    for (int i = 1; i < N; i++) {
        cin >> arr[i];
        m = min(arr[i], m);
    }

    for (int i = 0; i < N; i++) {
        if (arr[i] == m) {
            cout << i + 1 << ' ';
        }
    }
    cout << '\n';

    return 0;
}
