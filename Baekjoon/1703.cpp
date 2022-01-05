#include <iostream>

using namespace std;

int main(void) {
    int a, split, pruning, branches;
    
    while (true) {
        cin >> a;
        if (a == 0) {
            break;
        }
        branches = 1;
        for (int i = 0; i < a; i++) {
            cin >> split >> pruning;
            branches *= split;
            branches -= pruning;
        }
        cout << branches << '\n';
    }
    return 0;
}