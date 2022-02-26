#include <iostream>
#include <string>

using namespace std;

string symbol[2] = {" ", "*"};
string postfix[2] = {"\n", " "};

int main(void) {

    string s, line;
    int arr[26] = {0};
    int h = 0, idx;

    for (int i = 0; i < 4; i++) {
        getline(cin, s);
        for (int j = 0; j < s.length(); j++) {
            if ('A' <= s[j] && s[j] <= 'Z') {
                idx = s[j] - 'A';
                arr[idx] += 1;
                if (arr[idx] > h) {
                    h = arr[idx];
                }
            }
        }
    }

    for (int i = h; i >= 0; i--) {
        line = "";
        for (int j = 0; j < 26; j++) {
            if (i == 0) {
                line += ('A' + j);
            } else {
                line += symbol[arr[j] >= i];
            }
            line += postfix[j < 25];
        }
        cout << line;
    }

    return 0;
}

