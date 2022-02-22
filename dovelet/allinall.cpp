#include <iostream>
#include <string>

using namespace std;

int main(void) {
    string a, b;

    while (true) {    
        cin >> a >> b;

        if (cin.eof()) {
            break;
        }

        int idx = 0;
        for (int i = 0; b[i]; i++) {
            if (a[idx] == b[i]) {
                idx++;
            }
        }
        if (idx == a.length()) {
            cout << "Yes\n";
        } else {
            cout << "No\n";
        }
        
    }

    return 0;
}

