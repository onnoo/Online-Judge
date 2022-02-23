#include <iostream>
#include <string>
#include <vector>

using namespace std;

int n;
vector<string> arr;
string name, other;

int name2idx(string s) {
    int idx = 0;
    for (int i = 0; i < n; i++) {
        if (s == arr[i]) {
            idx = i;
            break;
        }
    }
    return idx;
}

int main(void) {

    int a, b;
    int start[30] = {0};
    int money[30] = {0};
    
    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> name;
        arr.push_back(name);
    }

    for (int i = 0; i < n; i++) {
        cin >> name >> a >> b;
        start[name2idx(name)] = a;
        if (b != 0) {
            money[name2idx(name)] += (a - b * (a / b));
        }

        for (int j = 0; j < b; j++) {
            cin >> other;
            money[name2idx(other)] += (a / b);
        }
    }

    for (int i = 0; i < n; i++) {
        cout << arr[i] << ' ' << money[i] - start[i] << '\n';
    }
    
    return 0;
}

