#include <iostream>

using namespace std;

int main(void) {
    int a, row, col, diag, lines, ans = -1;
    int arr[26][2];
    int check[12] = {0};

    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            cin >> a;
            arr[a][0] = i; // row
            arr[a][1] = j; // col
        }
    }
    for (int i = 0; i < 25; i++) {
        cin >> a;
        row = arr[a][0];
        col = arr[a][1];
        check[row] += 1;
        check[5 + col] += 1;
        check[10] += (row == col);
        check[11] += (row == (4 - col));
        
        lines = 0;
        for (int j = 0; j < 12; j++) {
            lines += (check[j] == 5);
        }
        if (ans == -1 && lines >= 3) {
            ans = i + 1;
        }
    }
    cout << ans << '\n';

    return 0;
}
