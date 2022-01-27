#include <iostream>
#include <cmath>

using namespace std;

int main(void) {
    int i = 1;
    double PI = 3.1415927;
    double radius, n_spin, time, distance;
    cin >> radius >> n_spin >> time;

    cout.precision(2);
    cout << fixed;

    while (n_spin != 0) {
        distance = PI * radius / (12 * 5280) * n_spin;
        time = 3600 / time;
        cout << "Trip #" << i++ << ": " << distance << " " << distance * time << '\n';

        cin >> radius >> n_spin >> time;
    }
    return 0;
}
