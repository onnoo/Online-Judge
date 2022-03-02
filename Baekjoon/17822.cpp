#include <iostream>

using namespace std;

int main(void) {
    int N, M, T, x, d, k;
    cin >> N >> M >> T;

    int arr[N][M];
    bool check[N][M];
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            cin >> arr[i][j];
        }
    }

    while (T--) {
        cin >> x >> d >> k; // x: 원판 배수, 0:시계, 1: 반시계, k: 칸
        for (int i = x; i <= N; i += x) {
            int tmp[M];
            for (int j = 0; j < M; j++) {
                tmp[j] = arr[i - 1][j];
            }
            for (int j = 0; j < M; j++) {
                if (d == 0) {
                    arr[i - 1][(j + k) % M] = tmp[j];
                } else {
                    arr[i - 1][(j - k + M) % M] = tmp[j];
                }
            }
        }

        bool find = false;
        int pos[4][2] = {{1, 0}, {0, 1}, {-1, 0}, {0, -1}};
        for (int i = 0; i < N; i++) {
            for (int j = 0; j < M; j++) {
                check[i][j] = false;
            }
        }
        for (int i = 0; i < N; i++) {
            for (int j = 0; j < M; j++) {
                if (arr[i][j] == -9999) {
                    continue;
                }
                int v = arr[i][j];
                for (int k = 0; k < 4; k++) {
                    int x = i + pos[k][0];
                    int y = (M + j + pos[k][1]) % M;
                    if (x >= 0 && x < N && arr[x][y] == v) {
                        find = true;
                        check[i][j] = check[x][y] = true;
                    }
                }
            }
        }
        if (find) {
            for (int i = 0; i < N; i++) {
                for (int j = 0; j < M; j++) {
                    if (check[i][j]) {
                        arr[i][j] = -9999;
                    }
                }
            }
        }
        else {
            float mean = 0, cnt = 0;
            for (int i = 0; i < N; i++) {
                for (int j = 0; j < M; j++) {
                    if (arr[i][j] == -9999) {
                        continue;
                    }
                    mean += arr[i][j];
                    cnt += 1;
                }
            }
            mean = mean / cnt;
            for (int i = 0; i < N; i++) {
                for (int j = 0; j < M; j++) {
                    if (arr[i][j] == -9999) {
                        continue;
                    }
                    if (arr[i][j] > mean) {
                        arr[i][j] -= 1;
                    } else if (arr[i][j] < mean) {
                        arr[i][j] += 1;
                    }
                }
            }
        }
    }

    int ans = 0;
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            if (arr[i][j] == -9999) {
                continue;
            }
            ans += arr[i][j];
        }
    }
    cout << ans << '\n';

    return 0;
}
