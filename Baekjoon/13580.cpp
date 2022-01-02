#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(void) {
    int N;
    vector<int> v;

    for (int i = 0; i < 3; i++) {
        cin >> N;
        v.push_back(N);
    }

    sort(v.begin(), v.end());

    if (v[0] == v[1] || v[1] == v[2]) {
        cout << "S\n";
    } else if (v[0] + v[1] == v[2]) {
        cout << "S\n";
    } else {
        cout << "N\n";
    }

    return 0;
}