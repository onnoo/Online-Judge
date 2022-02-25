#include <iostream>
#include <string>

using namespace std;

string arr[8] = {
    "000000", "001111", "010011", "011100",
    "100110", "101001", "110101", "111010"
};

int main(void) {
    int n, cnt;
    bool check, match;
    string s, ans = "";
    cin >> n >> s;
    
    for (int i = 0; i < n; i++) {
        check = false;
        for (int j = 0; j < 8; j++) {
            match = true;
            cnt = 0;
            for (int k = 0; k < 6; k++) {
                if (s[i * 6 + k] != arr[j][k]) {
                    match = false;
                    cnt += 1;
                }
            }
            if (match || (!match && cnt == 1)) {
                ans += 'A' + j;
                check = true;
                break;
            }
        }
        if (!check) {
            cout << i + 1 << '\n';
            return 0;
        }
    }
    
    cout << ans << '\n';

    return 0;
}