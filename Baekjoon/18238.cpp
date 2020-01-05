#include <iostream>
#include <string>
#include <algorithm>
#include <cstdlib>

using namespace std;

int num_move(char a, char b) {
    int dst = abs(a - b);
    return min(dst, 26 - dst);
}

int main(void)
{
    int ans = 0;
    char now = 'A';
    string s;
    cin >> s;
    
    for (int i = 0; s[i]; i++) {
        ans += num_move(now, s[i]);
        now = s[i];
    }

    cout << ans << '\n';

    return 0;
}