#include <iostream>

using namespace std;

int main(void) {
    int n, s, tmp;
    cin >> n >> s;
    // 가까운 두개를 비교하고 작은 수를 앞으로 (맨 뒤가 제일 큰 수)
    
    int arr[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    
    for (int t = 1; t <= s; t++) {
        for (int i = 0; i < n - t; i++) {
            if (arr[i] > arr[i + 1]) {
                tmp = arr[i];
                arr[i] = arr[i + 1];
                arr[i + 1] = tmp;
            }
        }
    }

    for (int i = 0; i < n; i++) {
        cout << arr[i] << ' ';
    }
    cout << '\n';

    return 0;
}