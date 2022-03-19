#include <iostream>
#include <string>
#include <algorithm>
#include <vector>

using namespace std;

int main(void) {
    int n, maxlen = -1;
    cin >> n;

    int arr[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
        maxlen = max(maxlen, (int) to_string(arr[i]).length());
    }
    
    int radix = 1, index;
    for (int t = 0; t < maxlen - 1; t++) {
        vector<int> v[10];
        for (int i = 0; i < n; i++) {
            if (arr[i] < radix) {
                v[0].push_back(arr[i]);
            } else {
                index = (arr[i] % (radix * 10)) / radix;
                v[index].push_back(arr[i]);
            }
        }
        index = 0;
        for (int i = 0; i < 10; i++) {
            for (int j = 0; j < v[i].size(); j++) {
                arr[index++] = v[i][j];
            }
        }
        radix *= 10;
    }

    for (int i = 0; i < n; i++) {
        cout << arr[i] << ' ';
    }
    cout << '\n';

    return 0;
}