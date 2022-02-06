#include <iostream>

using namespace std;

int main(void) {
    int a, b, k, tot = 0, min;
    cin >> a >> b;

    for (int i = 1; i * i < a; i++) {
        k = i;
    }
    k++;

    if (k * k > b) {
        cout << -1 << '\n';
        return 0;
    }
    min = k * k;

    for (int i = a; i <= b && k * k <= b; i++) {
        tot += k * k;
        k++;
    }

    cout << tot << '\n';
    cout << min << '\n';

    return 0;
}