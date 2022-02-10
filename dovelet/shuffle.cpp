#include <iostream>

using namespace std;

int main(void) {

    int n, r, p, c;

    cin >> n >> r;

    while (!(n == 0 && r == 0)) {
        int arr[n];

        for (int i = 0; i < n; i++) {
            arr[i] = n - i;
        }
        
        for (int i = 0; i < r; i++) {
            cin >> p >> c;
            p--;
            int tmp[p];
            for (int j = 0; j < p; j++) {
                tmp[j] = arr[j];
            }
            for (int j = 0; j < c; j++) {
                arr[j] = arr[p + j];
            }
            for (int j = 0; j < p; j++) {
                arr[c + j] = tmp[j];
            }

        }

        cout << arr[0] << '\n';

        cin >> n >> r;
    }


    return 0;
}
