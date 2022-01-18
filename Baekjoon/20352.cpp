#include <iostream>
#include <cmath>

using namespace std;

int main(void) {

    double a;
    cin >> a;

    double r = sqrt(a / M_PI);
    
    cout << fixed;
    cout.precision(15);
    cout << 2 * r * M_PI << '\n';
    return 0;
}