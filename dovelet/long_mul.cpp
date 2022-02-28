#include <iostream>
#include <string>

using namespace std;

int main(void) {
    int arr[50010] = {0};
    string a, b, ans = "";

    cin >> a >> b;

    for (int i = 0; i < a.length(); i++) {
        for (int j = 0; j < b.length(); j++) {
            arr[i + j] += (a[a.length() - i - 1] - '0') * (b[b.length() - j - 1] - '0');
        }
    }

    for (int i = 0; i < 50000; i++) {
        arr[i + 1] += arr[i] / 10;
        ans = to_string(arr[i] % 10) + ans;
    }

    while (ans.length() > 1 && ans[0] == '0') {
        ans = ans.substr(1, ans.length());
    }
    cout << ans << '\n';

    return 0;
}
