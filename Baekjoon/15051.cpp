#include <iostream>
#include <algorithm>

using namespace std;

int main(void) {
    int a, b, c;
    cin >> a >> b >> c;
    cout << min(b * 2 + c * 4, min(a * 2 + c * 2, a * 4 + b * 2)) << '\n';
    
    return 0;
}