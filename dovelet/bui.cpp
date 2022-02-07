#include <iostream>

using namespace std;

int main(void) {
    int n, i, j, lines, length;
    cin >> n;

    lines = 4 + (n + 1) / 2;
    length = 8 + n - 2;

    int arr[lines][length];

    // 배열 초기화
    for (int i = 0; i < lines; i++) {
        for (int j = 0; j < length; j++) {
            arr[i][j] = 0;
        }
    }

    arr[0][1] = arr[0][2] = arr[0][length - 2] = arr[0][length - 3] = 1;
    for (int i = 1; i < lines; i++) {
        arr[i][i - 1] = 1;
        arr[i][length - (i)] = 1;
        arr[i][i - 1 + 3] = (i < lines - 3 ? 1 : arr[i][i - 1 + 3]);
        arr[i][length - (i + 3)] = (i < lines - 3 ? 1 : arr[i][length - (i + 3)]);
    }

    // 출력
    for (int i = 0; i < lines; i++) {
        for (int j = 0; j < (i == 0 ? length - 1 : length - i + 1); j++) {
            cout << (arr[i][j] ? '*' : ' ');
        }
        cout << '\n';
    }

    return 0;
}
