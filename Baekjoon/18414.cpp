#include <iostream>

using namespace std;

int main(void) {
    int X, L, R;
    cin >> X >> L >> R;
    
    if (X <= L) {
        cout << L << '\n';
    } else if (X >= R) {
        cout << R << '\n';
    } else {
        cout << X << '\n';
    }
    
    return 0;
}