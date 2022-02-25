#include <iostream>
#include <string>

using namespace std;

int main(void) {

    char decode[255] = {0};
    string code, s, ans = "";

    getline(cin, code);
    getline(cin, s);

    decode[' '] = ' ';
    for (int i = 0; i < 26; i++) {
        decode['a' + i] = 'a' + code[i] - 'a';
        decode['A' + i] = 'A' + code[i] - 'a';
    }

    for (int i = 0; i < s.length(); i++) {
        ans = ans + decode[s[i]];
    }

    cout << ans << '\n';

    return 0;
}

