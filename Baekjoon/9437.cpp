#include <iostream>

using namespace std;

int main(void) {
    int N, P;
    
    while (true) {
        cin >> N;
        if (N == 0) {
            break;
        }
        cin >> P;
        if (P <= N / 2) {
            if (P % 2 == 0) {
                cout << P - 1 << ' ' << N + 1 - P << ' ' << N + 2 - P << '\n';
            } else {
                cout << P + 1 << ' ' << N - P << ' ' << N + 1 - P << '\n';
            }
        } else {
            if (P % 2 == 0) {
                cout << N - P + 1 << ' ' << N - P + 2 << ' ' << P - 1 << '\n';
            } else {
                cout << N - P << ' ' << N - P + 1 << ' ' << P + 1 << '\n';
            }
        }
    }
    
    return 0;
}