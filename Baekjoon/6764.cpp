#include <iostream>

using namespace std;

int main(void) {
    int arr[4] = {};

    for (int i = 0; i < 4; i++) {
        cin >> arr[i];
    }

    // check for constant
    bool check = true;
    for (int i = 1; i < 4; i++) {
        check = check & (arr[0] == arr[i]);
    }
    if (check) {
        cout << "Fish At Constant Depth\n";
        return 0;
    }

    // check for rising
    check = true;
    for (int i = 1; i < 4; i++) {
        check = check & (arr[i] > arr[i - 1]);
    }
    if (check) {
        cout << "Fish Rising\n";
        return 0;
    }

    // check for diving
    check = true;
    for (int i = 1; i < 4; i++) {
        check = check & (arr[i] < arr[i - 1]);
    }
    if (check) {
        cout << "Fish Diving\n";
        return 0;
    }

    cout << "No Fish\n";
    return 0;
}