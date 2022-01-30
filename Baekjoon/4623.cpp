#include <iostream>
#include <algorithm>

using namespace std;

int main(void) {
    double A, B, C, D, src_min, src_max, dst_min, dst_max;
    cin >> A >> B >> C >> D;

    while (!(A == 0 && B == 0 && C == 0 && D == 0)) {
        src_min = min(A, B);
        src_max = max(A, B);
        dst_min = min(C, D);
        dst_max = max(C, D);

        cout << int(min(1.0, min(dst_min / src_min, dst_max / src_max)) * 100) << "%\n";
        cin >> A >> B >> C >> D;
    }

    return 0;
}