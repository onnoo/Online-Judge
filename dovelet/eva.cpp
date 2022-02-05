#include <iostream>

using namespace std;

int main(void) {
    int arr[4];
    for (int i = 0; i < 4; i++) {
        cin >> arr[i];
    }
    if (arr[1] - arr[0] == arr[2] - arr[1] && arr[2] - arr[1] == arr[3] - arr[2]) {
        for (int i = 0; i < 4; i++) {
            cout << arr[i] << ' ';
        }
        cout << arr[3] + arr[1] - arr[0] << '\n';
    } else {
        for (int i = 0; i < 4; i++) {
            cout << arr[i] << ' ';
        }
        cout << arr[3] * (arr[1] / arr[0]) << '\n';
    }
    return 0;
}