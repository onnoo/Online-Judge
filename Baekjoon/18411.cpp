#include <iostream>
#include <algorithm>

using namespace std;

int main(void) {
    int A, B, C;
    cin >> A >> B >> C;

    cout << max(A + B, max(B + C, C + A)) << '\n';
    
    return 0;
}