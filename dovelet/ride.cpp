#include <iostream>
#include <string>

using namespace std;

int calc(string s) {
    int acc = 1;
    for (int i = 0; s[i]; i++) {
        acc = (acc * (s[i] - 'A' + 1)) % 47;
    }
    return acc;
}

int main(void) {
    string a, b;
    cin >> a >> b;

    if (calc(a) == calc(b)) {
        cout << "GO\n";
    } else {
        cout << "STAY\n";
    }

    return 0;
}

