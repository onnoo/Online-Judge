#include <iostream>

using namespace std;

typedef long long ll;

int main(void)
{
    iostream::sync_with_stdio(0);
    cin.tie(0);

    int t;
    ll n;
    cin >> t;

    while(t--)
    {
        cin >> n;
        cout << ll(n / 2) + (n % 2) << '\n';
    }

    return 0;
}