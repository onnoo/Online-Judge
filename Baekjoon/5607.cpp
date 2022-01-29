#include <iostream>

using namespace std;

int main(void) {
    int n, a, b, score_a, score_b;
    score_a = score_b = 0;

    cin >> n;
    while (n--) {
        cin >> a >> b;
        if (a > b) {
            score_a += a + b;
        } else if (a < b){
            score_b += a + b;
        } else {
            score_a += a;
            score_b += b;
        }
    }

    cout << score_a << ' ' << score_b << '\n';
    return 0;
}