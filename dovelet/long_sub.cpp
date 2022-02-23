#include <iostream>
#include <string>

using namespace std;

string a, b, prefix, ans = "";
int c, d, n, carry = 0;

void swap() {
    string temp = a; a = b; b = temp;
}

string validate() {
    if (a.length() > b.length()) {
        return "";
    }
    else if (a.length() < b.length()) {
        swap();
        return "-";
    }
    for (int i = 0; i < a.length(); i++) {
        if (a[i] > b[i]) {
            return "";
        } else if (a[i] < b[i]) {
            swap();
            return "-";
        }
    }
    return "";
}

int main(void) {
    cin >> a >> b;
    prefix = validate();

    for (int i = 0; i < a.length(); i++) {
        c = a[a.length() - 1 - i] - '0';
        d = (i < b.length() ? b[b.length() - 1 - i] - '0' : 0);
        n = c - d - carry;
        if (n < 0) {
            n += 10;
            carry = 1;
        } else {
            carry = 0;
        }
        ans = (char)(n + '0') + ans;
    }

    while (ans.length() > 1 && ans[0] == '0') {
        ans = ans.substr(1, ans.length());
    }
    cout << prefix + ans << '\n';

    return 0;
}

