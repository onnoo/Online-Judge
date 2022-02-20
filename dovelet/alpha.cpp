#include <iostream>

using namespace std;

int main(void) {
    char a, b, c;
    
    for (a = 'A'; a <= 'Z'; a++) {
        for (b = 'A'; b <= 'Z'; b++) {
            for (c = 'A'; c <= 'Z'; c++) {
                cout << a << b << c << ' ';
            }
        }
    }
    cout << '\n';

    return 0;
}

