#include <iostream>
#include <cmath>

#define _USE_MATH_DEFINES

using namespace std;

int main(void)
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    double A1, P1, A2, P2;
    cin >> A1 >> P1 >> A2 >> P2;

    if (A1 / P1 > A2 * A2 * M_PI / P2)
        cout << "Slice of pizza\n";
    else
        cout << "Whole pizza\n";

    return 0;
}