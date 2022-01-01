#include <iostream>
#include <algorithm>

using namespace std;

int main(void) {
    int N, W, H, L;
    cin >> N >> W >> H >> L;
    cout << min(N, (W / L) * (H / L)) << '\n';
    
    return 0;
}