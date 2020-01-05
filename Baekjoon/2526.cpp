#include <iostream>

using namespace std;

int main(void) {
    int N, P, tmp, cnt = 0;
    int arr[97] = {0,};

    cin >> N >> P;
    
    tmp = N;
    for (cnt = 1; arr[tmp] == 0; cnt++) {
        arr[tmp] = cnt;
        tmp = tmp * N % P;
    }

    cout << cnt - arr[tmp] << '\n';

    return 0;
}