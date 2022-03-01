#include <iostream>
#include <string>

using namespace std;

int main(void) {
    int N;
    string s;
    cin >> N;

    int pos[8][2] = {
        {0, -1}, {1, -1}, {1, 0}, {1, 1},
        {0, 1}, {-1, 1}, {-1, 0}, {-1, -1}
    };
    char ans[N][N];
    bool map[N][N], check[N][N], mine = false;
    for (int i = 0; i < N; i++) {
        cin >> s;
        for (int j = 0; j < N; j++) {
            map[i][j] = s[j] == '*';
        }
    }
    for (int i = 0; i < N; i++) {
        cin >> s;
        for (int j = 0; j < N; j++) {
            check[i][j] = s[j] == 'x';
            if (check[i][j] && map[i][j]) {
                mine = true;
            }
        }
    }

    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            if (mine && map[i][j]) {
                ans[i][j] = '*';
            } else if (check[i][j]) {
                int x, y, cnt = 0;
                for (int k = 0; k < 8; k++) {
                    x = i + pos[k][0];
                    y = j + pos[k][1];
                    if (x >= 0 && x < N && y >= 0 && y < N) {
                        cnt += map[x][y];
                    }
                }
                ans[i][j] = '0' + cnt;
            } else {
                ans[i][j] = '.';
            }
        }
    }

    for (int i = 0; i < N; i++) {
        s = "";
        for (int j = 0; j < N; j++) {
            s += ans[i][j];
        }
        cout << s << '\n';
    }
    
    return 0;
}