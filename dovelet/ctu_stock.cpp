#include <iostream>
#include <algorithm>

using namespace std;

int main(void) {
    int D, M, price, min_stock, max_stock, ans, cnt = 0;
    cin >> D >> M;

    ans = M;
    min_stock = max_stock = -1;

    for (int i = 0; i < D; i++) {
        cin >> price;
        if (price < min_stock || min_stock == -1) {
            min_stock = price;
            max_stock = price;
            cnt = M / min_stock;
        }
        if (price >= max_stock || max_stock == -1) {
            max_stock = price;
            ans = max(ans, M + cnt * (max_stock - min_stock));
        }
    }
    cout << ans - M << '\n';

    return 0;
}
