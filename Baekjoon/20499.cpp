#include <iostream>
#include <string>

using namespace std;

int main(void) {
    string s;
    cin >> s;

    int arr[3] = {};

    int j = 0, k = 0;
    for (int i = 0; i < s.length(); i++) {
        if (s[i] == '/') {
            arr[j] = stoi(s.substr(k, i));
            k = i + 1;
            j++;
        }
    }
    arr[j] = stoi(s.substr(k, s.length()));

    if (arr[1] == 0 || arr[0] + arr[2] < arr[1]) {
        cout << "hasu\n";
    } else {
        cout << "gosu\n";
    }

    return 0;
}