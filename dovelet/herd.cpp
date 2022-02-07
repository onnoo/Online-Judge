#include <iostream>

using namespace std;

int main(void) {
    int N, tot, cnt = 0;
    cin >> N;
    
    for (int i = 1; i <= N; i++) {
        tot = 0;
        for (int j = i; tot < N; j++) {
            tot += j;
        }
        cnt += tot == N;
    }
    cout << cnt << '\n';
    return 0;
}
