#include <iostream>

using namespace std;

int main(void) {
    int k;
    cin >> k;

    int arr[k];
    for (int i = 0; i < k; i++) {
        cin >> arr[i];
    }

    int i[6];
    
    for (i[0] = 0; i[0] < k; i[0]++) {
        for (i[1] = i[0] + 1; i[1] < k; i[1]++) {
            for (i[2] = i[1] + 1; i[2] < k; i[2]++) {
                for (i[3] = i[2] + 1; i[3] < k; i[3]++) {
                    for (i[4] = i[3] + 1; i[4] < k; i[4]++) {
                        for (i[5] = i[4] + 1; i[5] < k; i[5]++) {
                            for (int j = 0; j < 6; j++) {
                                cout << arr[i[j]] << ' ';
                            }
                            cout << '\n';
                        }
                    }
                }
            }
        }
    }
    
    return 0;
}

