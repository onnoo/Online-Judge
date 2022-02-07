#include <iostream>

using namespace std;

int main(void) {
    int N;
    cin >> N;
    for (int i = 1; i <= N / 2; i++) {
        for (int j = 1; j <= 6; j++) {
            if (i + j == N) {
                cout << i << ' ' << j << '\n';
            }
        }
    }
    return 0;
}
