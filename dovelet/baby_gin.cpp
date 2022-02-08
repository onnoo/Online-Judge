#include <iostream>

using namespace std;

int main(void) {
    int n;
    int arr[10] = {0};
    for (int i = 0; i < 6; i++) {
        cin >> n;
        arr[n]++;
    }

    for (int i = 0; i < 10; i++) {
        while (arr[i] >= 3) {
            arr[i] -= 3;
        }
        if (arr[i] > 0) {
            while (i + 1 < 10 && i + 2 < 10 && arr[i + 1] > 0 && arr[i + 2] > 0) {
                arr[i] -= 1;
                arr[i + 1] -= 1;
                arr[i + 2] -= 1;
            }
        }
    }

    bool ans = true;
    for (int i = 0; i < 10; i++) {
        if (arr[i] > 0) {
            ans = false;
            break;
        }
    }

    cout << (ans ? "gin" : "lose") << '\n';

    return 0;
}
