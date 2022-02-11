#include <iostream>
#include <cmath>
#include <vector>

using namespace std;

int main(void) {
    int n;
    cin >> n;

    const int MAX = 10001;
    bool arr[MAX] = {false};
    vector<int> v;

    for (int i = 2; i <= n; i++) {
        if (arr[i] == false) {
            v.push_back(i);
            // i*k (k < i) 까지는 이미 검사되었으므로 j시작 값은 i*2에서 i*i로 개선할 수 있다.
            for (int j = i * i; j <= MAX; j += i) {
                arr[j] = true;
            }
        }
    }

    for (int i = 0; i < v.size(); i++) {
        cout << v[i] << ' ';
    }
    cout << '\n';

    return 0;
}
