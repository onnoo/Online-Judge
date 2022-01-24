#include <iostream>

using namespace std;

int main(void) {
    int S, M, L, res;
    cin >> S >> M >> L;
    res = 1 * S + 2 * M + 3 * L;
    if (res >= 10) {
        cout << "happy\n";
    } else {
        cout << "sad\n";
    }
    
    return 0;
}