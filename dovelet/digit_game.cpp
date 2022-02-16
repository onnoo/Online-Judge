#include <iostream>
#include <algorithm>

using namespace std;

int main(void) {
    int N, max_val, val, ans = 0;
    int arr[5], i[3];

    cin >> N;
    int* max_arr = (int *)calloc(N, sizeof(int));
    
    for (int n = 0; n < N; n++) {
        max_val = -1;
        for (int j = 0; j < 5; j++) {
            cin >> arr[j];
        }
        
        for (i[0] = 0; i[0] < 5; i[0]++) {
            for (i[1] = i[0] + 1; i[1] < 5; i[1]++) {
                for (i[2] = i[1] + 1; i[2] < 5; i[2]++) {
                    val = (arr[i[0]] + arr[i[1]] + arr[i[2]]) % 10;
                    max_val = max(max_val, val);
                    max_arr[n] = max(max_arr[n], max_val);
                }
            }
        }
        if (max_arr[ans] <= max_val) {
            ans = n;
        }
    }

    cout << ans + 1 << '\n';

    return 0;
}

