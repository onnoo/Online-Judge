#include <iostream>

using namespace std;

int main(void) {
    int arr[1000] = {0};
    int N, a, strike, ball, acc_strike, acc_ball, ans = 0;
    cin >> N;

    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            for (int k = 0; k < 10; k++) {
                if (i == j || j == k || i == k || i == 0 || j == 0 || k == 0) {
                    arr[i * 100 + j * 10 + k] = 1;
                }
            }
        }
    }

    for (int i = 0; i < N; i++) {
        cin >> a >> strike >> ball;
        int num[3][10] = {0};
        num[0][a / 100] = 1;
        num[1][a % 100 / 10] = 1;
        num[2][a % 10] = 1;

        for (int j = 123; j < 1000; j++) {
            if (arr[j] == 1) {
                continue;
            }

            acc_strike = acc_ball = 0;

            acc_strike += (num[0][j / 100]);
            acc_strike += (num[1][j % 100 / 10]);
            acc_strike += (num[2][j % 10]);
            acc_ball += (num[1][j / 100] || num[2][j / 100]);
            acc_ball += (num[0][j % 100 / 10] || num[2][j % 100 / 10]);
            acc_ball += (num[0][j % 10] || num[1][j % 10]);

            if (!(acc_strike == strike && acc_ball == ball)) {
                arr[j] = 1;
            }
        }
    }

    for (int i = 123; i < 1000; i++) {
        ans += (arr[i] == 0);
    }
    
    cout << ans << '\n';

    return 0;
}
