#include <iostream>

using namespace std;

int N, L;

bool check(int arr[]) {
    bool flag[N];
    int h;
    for (int i = 0; i < N; i++) {
        flag[i] = false;
    }
    for (int i = 1; i < N; i++) {
        if (arr[i - 1] == arr[i]) {
            continue;
        } else if (arr[i - 1] - 1 == arr[i]) {
            h = arr[i];
            for (int j = 0; j < L; j++) {
                if (i + j < N && !flag[i + j] && arr[i + j] == h) {
                    flag[i + j] = true;
                } else {
                    return false;
                }
            }
        } else if (arr[i - 1] == arr[i] - 1) {
            h = arr[i];
            for (int j = 0; j < L; j++) {
                if (i - 1 - j >= 0 && !flag[i - 1 - j]) {
                    flag[i - 1 - j] = true;
                } else {
                    return false;
                }
            }
        } else {
            return false;
        }
    }
    return true;
}

int main(void) {
    cin >> N >> L;
    
    int arr[N][N], cnt = 0;
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            cin >> arr[i][j];
        }
    }
    
    for (int i = 0; i < N; i++) {
        cnt += check(arr[i]);
    }
    for (int i = 0; i < N; i++) {
        int inp[N];
        for (int j = 0; j < N; j++) {
            inp[j] = arr[j][i];
        }
        cnt += check(inp);
    }
    cout << cnt << '\n';
    return 0;
}