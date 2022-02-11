#include <iostream>

using namespace std;

int main(void) {
    int arr[5][5];
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            cin >> arr[i][j];
        }
    }

    int x, y, acc, tot;
    int pos[4][2] = {{1, 0}, {0, 1}, {-1, 0}, {0, -1}};

    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            acc = tot = 0;
            for (int k = 0; k < 4; k++) {
                x = i + pos[k][0];
                y = j + pos[k][1];
                if (0 <= x && x < 5 && 0 <= y && y < 5) {
                    acc++;
                    if (arr[x][y] > arr[i][j]) {
                        tot++;
                    }
                }
            }
            if (tot == acc) {
                arr[i][j] = -1;
            }
        }
    }

    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            if (arr[i][j] == -1) {
                cout << '*' << ' ';
            } else {
                cout << arr[i][j] << ' ';
            }
        }
        cout << '\n';
    }

    return 0;
}
