#include <iostream>

using namespace std;

int main(void) {
    int N;
    int arr[1000] = {0, 1};
    for (int i = 2; i < 1000; i++) {
        arr[i] = arr[i - 1] + (i - 1) * 2;
    }

    cin >> N;
    while (N != 0) {
        cout << N << " => " << arr[N] << '\n';
        cin >> N;
    }
    return 0;
}