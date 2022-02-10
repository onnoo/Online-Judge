#include <iostream>

using namespace std;

int main(void) {
    int n, k, a, b;
    cin >> n;

    bool arr[n];

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cin >> k;
    for (int i = 0; i < k; i++) {
        cin >> a >> b;
        if (a == 1) {
            for (int j = b - 1; j < n; j += b) {
                arr[j] = !arr[j];
            }
        } else { // a == 2
            int offset = 0;
            b--;
            for (int j = 1; 0 <= b - j && b + j < n; j++) {
                if (arr[b - j] == arr[b + j]) {
                    offset += 1;
                } else {
                    break;
                }
            }
            for (int j = b - offset; j <= b + offset; j++) {
                arr[j] = !arr[j];
            }
        }
    }

    for (int i = 0; i < n; i++) {
        cout << arr[i] << ((i + 1) % 20 == 0 ? '\n' : ' ');
    }
    cout << '\n';

    return 0;
}

