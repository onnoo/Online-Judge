#include <iostream>

using namespace std;

int main(void) {
    int a, n;
    int arr[30];
    int mat[30][9] = {0};
    
    cin >> a;
    for (n = 0; a != 0; n++) {
        arr[n] = a;
        for (int j = 0; j < arr[n]; j++) {
            mat[n][8 - j] = 1;
        }
        cin >> a;
    }

    for (int j = 0; j < 9; j++) {
        for (int i = 0; i < n; i++) {
            cout << ' ' << (mat[i][j] == 1 ? '*' : ' ');
        }
        cout << '\n';
    }
    
    for (int i = 0; i < n; i++) {
        cout << ' ' << arr[i];
    }
    cout << '\n';

    return 0;
}
