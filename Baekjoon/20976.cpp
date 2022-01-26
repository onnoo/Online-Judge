#include <iostream>
#include <algorithm>

using namespace std;

int main(void) {
    int ls[3];
    for (int i = 0; i < 3; i++) {
        cin >> ls[i];
    }
    sort(ls, ls + 3);

    cout << ls[1] << '\n';

    return 0;
}