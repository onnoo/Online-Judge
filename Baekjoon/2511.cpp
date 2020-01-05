#include <iostream>

using namespace std;

int main() {
    char last_win = 'D';
    int score_a = 0, score_b = 0;
    int a[10] = {0,};
    int tmp;

    for (int i = 0; i < 10; i++)
    {
        cin >> a[i];
    }

    for (int i = 0; i < 10; i++)
    {
        cin >> tmp;
        if (a[i] > tmp) {
            score_a += 3;
            last_win = 'A';
        } else if (a[i] < tmp)
        {
            score_b += 3;
            last_win = 'B';
        }
        else {
            score_a += 1;
            score_b += 1;
        }
    }
    cout << score_a << ' ' << score_b << '\n';
    if (score_a == score_b) {
        cout << last_win << '\n';
    } else {
        cout << (score_a > score_b ? 'A' : 'B') << '\n';
    }
}