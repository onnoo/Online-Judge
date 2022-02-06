#include <iostream>
#include <string>

using namespace std;

int main(void) {
    string s;
    int arr[3] = {0, 0, 0};
    for (int i = 0; i < 7; i++) {
        cin >> s;
        arr[s.length() - 1] += stoi(s);
    }

    for (int i = 0; i < 3; i++) {
        cout << arr[i] << ' ';
    }
    cout << '\n';
    
    return 0;
}