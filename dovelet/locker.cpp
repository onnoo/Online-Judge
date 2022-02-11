#include <iostream>

using namespace std;

int main(void) {
    int N, prev, next, start, end, length, max_length;;
    cin >> N;

    int arr[N];
    for (int i = 0; i < N; i++) {
        cin >> arr[i];
    }
    
    max_length = 0;
    for (int i = 0; i < N; i++) {
        length = 1;
        for (int j = 0; j < N - 1; j++) {
            prev = (arr[(i + j) % N]) % N;
            next = (arr[(i + j + 1) % N]) % N;
            if (prev == 0) {
                prev = N;
            }
            if (prev - next == 1) {
                length++;
            } else {
                break;
            }
        }
        if (length > max_length) {
            max_length = length;
            start = i;
        }
    }

    // 섞이는 구간에서 가장 작은 숫자를 맨 앞으로 쉬프트
    cout << arr[(start + max_length - 1) % N] - 1 << '\n';
    // 1부터 max_length 구간을 뒤집는다
    cout << 1 << ' ' << max_length << '\n';
    // 섞이는 구간에서 가장 큰 숫자가 등장한 위치로 쉬프트
    cout << N - start << '\n';

    return 0;
}

