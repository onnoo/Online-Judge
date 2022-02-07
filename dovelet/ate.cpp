#include <iostream>

using namespace std;

int main(void) {
    int n, cnt = 0;
    cin >> n;
    
    for (int i = 0; i <= 99; i++) {
        for (int j = 0; j <= 99; j++) {
            cnt += (n - i - j == 0 ? 1 : 0);
        }
    }
    cout << cnt << '\n';
    return 0;
}
