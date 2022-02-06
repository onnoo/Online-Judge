#include <iostream>
#include <string>

using namespace std;

int main(void) {
    int n;
    cin >> n;

    string e = "";
    for (int i = 0; i < n; i++) {
        e += "*";
    }
    e += "\n";

    cout << e;
    for (int i = 0; i < (n - 3) / 2; i++) {
        cout << "*\n";
    }
    cout << e;
    for (int i = 0; i < (n - 3) / 2; i++) {
        cout << "*\n";
    }
    cout << e;
    
    return 0;
}
