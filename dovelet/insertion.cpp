#include <iostream>

using namespace std;

int main(void) {
    int n, s, target, idx;
    cin >> n >> s;

    int arr[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    for (int t = 0; t < s; t++) {
        target = arr[t];
        idx = t;
        // 삽입 위치 찾기 (바이너리 서치?)
        for (int i = 0; i < t; i++) {
            if (arr[i] > arr[t]) {
                idx = i;
                break;
            }
        }
        // 오른쪽으로 쉬프트
        for (int i = t; i > idx; i--) {
            arr[i] = arr[i - 1];
        }
        arr[idx] = target;
    }

    for (int i = 0; i < n; i++) {
        cout << arr[i] << ' ';
    }
    cout << '\n';
    
    return 0;
}