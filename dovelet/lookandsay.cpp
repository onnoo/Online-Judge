#include <iostream>
#include <string>

using namespace std;

int main(void) {
    string s;
    cin >> s;

    int cnt = 0;
    char c = s[0];

    for (int i = 0; s[i]; i++) {
        if (s[i] != c) {
            cout << cnt << c;
            cnt = 1;
            c = s[i];
        } else {
            cnt++;
        }
    }
    cout << cnt << c << '\n';

    return 0;
}

