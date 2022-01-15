#include <iostream>

using namespace std;

int main(void) {
    int inp;
    int arr[3] = {0, 0, 0};

    for (int i = 0; i < 3; i++) {
        cin >> inp;
        arr[inp]++;
    }

    if (arr[1] > arr[2]) {
        cout << 1 << '\n';
    } else {
        cout << 2 << '\n';
    }
    
    return 0;
}