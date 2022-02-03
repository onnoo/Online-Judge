#include <iostream>

using namespace std;

int main(void) {
    int N, row, col;
    cin >> N;
    row = col = 1;

    while (row * col < N) {
        if (row >= col) {
            col++;
        } else {
            row++;
        }
    }
    cout << row << ' ' << col << '\n';

    return 0;
}