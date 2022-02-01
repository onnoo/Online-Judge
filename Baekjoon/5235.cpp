#include <iostream>

using namespace std;

int main(void) {
    int T, k, n;
    cin >> T;

    while (T--) {
        cin >> k;
        int sum_arr[2] = {0, 0};
        for (int i = 0; i < k; i++) {
            cin >> n;
            sum_arr[n % 2] += n;
        }
        if (sum_arr[0] > sum_arr[1]) {
            cout << "EVEN\n";
        } else if (sum_arr[0] < sum_arr[1]){
            cout << "ODD\n";
        } else {
            cout << "TIE\n";
        }
    }
    return 0;
}