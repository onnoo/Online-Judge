#include <iostream>

using namespace std;

int main(void) {
    int tot = 0;
    int arr[9], ans[2];
    for (int i = 0; i < 9; i++) {
        cin >> arr[i];
        tot += arr[i];
    }

    for (int i = 0; i < 9; i++) {
        for (int j = i + 1; j < 9; j++) {
            if (tot - arr[i] - arr[j] == 100) {
                ans[0] = i;
                ans[1] = j;
            }
        }
    }

    for (int i = 0; i < 9; i++) {
        if (i == ans[0] || i == ans[1]) {
            continue;
        }
        cout << arr[i] << '\n';
    }
    
    return 0;
}