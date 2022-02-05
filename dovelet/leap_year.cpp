#include <iostream>

using namespace std;

int main(void) {
    int y;
    cin >> y;

    if (y % 4 == 0) {
        if (y % 400 == 0) {
            cout << "YES\n";
        } else if (y % 100 == 0) {
            cout << "NO\n";
        } else {
            cout << "YES\n";
        }
    } else {
        cout << "NO\n";
    }
    
    return 0;
}