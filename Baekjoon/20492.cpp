#include <iostream>
#include <iomanip>

using namespace std;

int main(void) {
    int N;
    cin >> N;
    cout << setprecision(16);
    cout << N * 0.78 << ' ' << N - (N * 0.2) * 0.22 << '\n';
}
