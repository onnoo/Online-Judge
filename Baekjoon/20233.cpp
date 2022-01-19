#include <iostream>
#include <algorithm>

using namespace std;

int main(void) {

    int a, x, b, y, T;
    cin >> a >> x >> b >> y >> T;

    cout << (a + max(0, T - 30) * x * 21) << ' ' << (b + max(0, T - 45) * y * 21) << '\n';
    
    return 0;
}