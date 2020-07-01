#include <iostream>

using namespace std;

typedef long long ll;

int main(void)
{
    iostream::sync_with_stdio(0);
    cin.tie(0);

    int t;
    ll n, r, ans, tmp;
    cin >> t;

    while(t--)
    {
        ans = 0;
        cin >> n >> r;
        
        tmp = min(n - 1, r);
        ans = tmp * (tmp + 1) / 2 + (n <= r);
        cout << ans << '\n';  
    }

    return 0;
}