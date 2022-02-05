#include <iostream>

using namespace std;

bool leap_year(int y) {
    if (y % 4 == 0) {
        if (y % 400 == 0) {
            return true;
        } else if (y % 100 == 0) {
            return false;
        } else {
            return true;
        }
    } else {
        return false;
    }
}

int main(void) {
    int y, m;
    cin >> y >> m;

    if (m == 2) {
        if (leap_year(y)) {
            cout << "29\n";
        } else {
            cout << "28\n";
        }
    } else if (m == 1 || m == 3 || m == 5 || m == 7 || m == 8 || m == 10 || m == 12) {
        cout << "31\n";
    } else {
        cout << "30\n";
    }
    return 0;
}