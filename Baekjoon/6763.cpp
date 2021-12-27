#include <iostream>

using namespace std;

int main(void) {
    int a, b, fee;
    cin >> a >> b;
    if (b - a <= 0) {
        fee = 0;
    } else if (b - a <= 20) {
        fee = 100;
    } else if (b - a <= 30) {
        fee = 270;
    } else {
        fee = 500;
    }

    if (fee == 0) {
        cout << "Congratulations, you are within the speed limit!\n";
    } else {
        cout << "You are speeding and your fine is $" << fee << ".\n";
    }
    return 0;
}