#include <iostream>

using namespace std;

int main(void) {
    int n, a;
    cin >> n;
    int check[2][102] = {0};

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> a;
            check[0][i] += a;
            check[1][j] += a;
        }
    }
    
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < n; j++) {
            if (check[i][j] % 2 == 1) {
                check[i][100] += 1;
                check[i][101] = j + 1;
            }
        }
    }

    if (check[0][100] == 0 && check[1][100] == 0) {
        cout << "ok\n";
    } else if (check[0][100] > 1 || check[1][100] > 1) {
        cout << "error\n";
    } else {
        cout << "change bit (" << check[0][101] << "," << check[1][101] << ")\n";
    }

    return 0;
}

