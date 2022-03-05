#include <iostream>

using namespace std;

int main(void) {
    int n, s, tmp, min_val, idx;
    cin >> n >> s;
    
    int arr[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    for (int t = 0; t < s; t++) {
        min_val = arr[t];
        idx = t;
        for (int i = t; i < n; i++) {
            if (min_val > arr[i]) {
                min_val = arr[i];
                idx = i;
            }
        }
        arr[idx] = arr[t];
        arr[t] = min_val;
    }
    for (int i = 0; i < n; i++) {
        cout << arr[i] << ' ';
    }
    cout << '\n';
    
    return 0;
}