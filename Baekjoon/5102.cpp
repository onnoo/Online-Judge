#include <iostream>

using namespace std;

int main(void) {
    int N, M;
    cin >> N >> M;
    while (!(N == 0 && M == 0)) {
        N -= M;
        if (N % 2 == 0 || N == 1) {
            cout << N / 2 << " 0\n";
        } else {
            cout << N / 2 - 1 << " 1\n";
        }
        cin >> N >> M;
    }
    
    return 0;
}