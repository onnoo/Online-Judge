#include <iostream>
#include <algorithm>

using namespace std;

int main(void) {
    int H, W, N, M, a, b;
    cin >> H >> W >> N >> M;

    N += 1;
    M += 1;

    a = H / (N);
    b = W / (M);

    if (H % N != 0) {
        a += 1;
    }
    if (W % M != 0) {
        b += 1;
    }
    
    cout << a * b << '\n';
    return 0;
}