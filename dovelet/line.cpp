#include <iostream>
#include <list>

using namespace std;

int main(void) {
    int n, a;
    list<int> ls;

    cin >> n;

    int arr[n];
    for (int i = 1; i <= n; i++) {
        cin >> a;
        list<int>::iterator iter = ls.begin();
        for (int j = 0; j < a; j++) {
            iter++;
        }
        ls.insert(iter, i);
    }

    while (ls.size() != 0) {
        cout << ls.back() << ' ';
        ls.pop_back();
    }
    cout << '\n';

    return 0;
}
