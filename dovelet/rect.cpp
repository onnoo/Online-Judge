#include <iostream>

using namespace std;

int main(void) {
    int arr[1001][1001] = {0};
    int x1, x2, y1, y2;

    for (int n = 0; n < 4; n++) {
        cin >> x1 >> y1 >> x2 >> y2;
        for (int i = x1; i < x2; i++) {
            for (int j = y1; j < y2; j++) {
                arr[i][j] = 1;
            }
        }
    }

    int ans = 0;
    for (int i = 0; i < 1001; i++) {
        for (int j = 0; j < 1001; j++) {
            if (arr[i][j] != 0) {
                ans++;
            }
        }
    }
    cout << ans << '\n';

    return 0;
}

