#include <iostream>
#include <string>

using namespace std;

int main(void) {
    int n;
    string buf;

    cin >> n;
    
    for (int i = n; i > 0; i--) {
        buf = "";
        for (int j = 0; j < n - i; j++) {
            buf += " ";
        }
        for (int j = i; j > 0; j--) {
            buf += to_string(j);
        }

        cout << buf << '\n';
    }

    return 0;
}