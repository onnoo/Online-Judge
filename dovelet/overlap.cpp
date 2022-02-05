#include <iostream>
 
using namespace std;
 
int main(void) {
    int map[202][202] = {0};
    for (int i = 0; i < 2; i++) {
        int x1, y1, x2, y2;
        cin >> x1 >> y1 >> x2 >> y2;
        for (int x = x1; x <= x2; x++) {
            for (int y = y1; y <= y2; y++) {
                map[x][y]++;
            }
        }
    }
    bool ans = false;
    for (int i = 0; i < 202; i++) {
        for (int j = 0; j < 202; j++) {
            if (map[i][j] == 2) {
                ans = true;
            }
        }
    }
    if (ans) {
        cout << "Overlap\n";
    } else {
        cout << "No overlap\n";
    }
}