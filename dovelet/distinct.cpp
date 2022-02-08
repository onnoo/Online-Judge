#include <iostream>

using namespace std;

int main(void) {
    int N, a, cnt = 0;
    cin >> N;

    bool arr[10001] = {false};
    while (N--) {
        cin >> a;
        if (arr[a] == false) {
            cnt++;
            arr[a] = true;
        }
    }

    cout << cnt << '\n';

    return 0;
}
