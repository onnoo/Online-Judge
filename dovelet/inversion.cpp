#include <iostream>
#include <list>

using namespace std;

int main(void) {
    int n, cnt;
    cin >> n;

    int arr[n];
    list<int> ls;

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    for (int i = n - 1; i >= 0; i--) {
        cnt = 0;
        list<int>::iterator iter;
        for (iter = ls.begin(); cnt != arr[i] && iter != ls.end(); iter++) {
            if (*iter > i + 1) {
                cnt++;
            }
        }
        ls.insert(iter, i + 1);
    }

    for (list<int>::iterator iter = ls.begin(); iter != ls.end(); iter++) {
        cout << *iter << ' ';
    }
    cout << '\n';

    return 0;
}
