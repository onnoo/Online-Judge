#include <iostream>

using namespace std;

int main(void) {
    int arr[30005] = {0, 1};

    for (int i = 2; i <= 30000; i++) {
        if (arr[i] == 0) {
            arr[i] = 2;
            for (int j = i + i; j <= 30000; j += i) {
                arr[j] = 1;
            }
        }
    }

    int n;
    cin >> n;

    if (arr[n] == 2) {
        cout << "prime\n";
    } else {
        cout << "not prime\n";
    }
    
    return 0;
}