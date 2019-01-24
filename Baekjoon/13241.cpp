#include <iostream>

using namespace std;
typedef long long ll;

ll gcd(ll a, ll b)
{
    if (b == 0)
        return a;
    else
    {
        if (a > b)
            return gcd(b, a % b);
        else
            return gcd(a, b % a);
    }
}

int main(void)
{
    ios_base::sync_with_stdio(false);
    long long A, B;
    cin >> A >> B;
    cout << A * B / gcd(A, B) << '\n';

    return 0;
}