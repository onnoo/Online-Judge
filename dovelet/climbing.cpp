#include <iostream>

using namespace std;

int main(void) {
    int n, u, d, cnt, tmp;
    cin >> n >> u >> d;

    while (n != 0) {
        tmp = cnt = 0;
        while (tmp < n) {
            tmp += (cnt++ % 2 ? -d : u);
        }
        cout << cnt << '\n';
        cin >> n >> u >> d;
    }
    return 0;
}
