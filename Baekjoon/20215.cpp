#include <iostream>
#include <cmath>

using namespace std;

int main(void) {
    double w, h;
    cin >> w >> h;
    cout.precision(14);
    cout << fixed;
    cout << w + h - sqrt(w * w + h * h) << '\n';
    return 0;
}