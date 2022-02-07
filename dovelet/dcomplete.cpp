#include <iostream>

using namespace std;

int main(void) {
    int N, tot;
    cin >> N;

    for (int i = 1; i <= N; i++) {
        tot = 0;
        for (int j = 1; j < i; j++) {
            if (i % j == 0) {
                tot += j;
            }
        }
        if (tot == i) {
            cout << i << '\n';
        }
    }
    return 0;
}
