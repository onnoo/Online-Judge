#include <iostream>

using namespace std;

int divider(int n)
{
    int d = 0;
    while (n != 0)
    {
        d += n % 10;
        n /= 10;
    }
    return d;
}

int main(void)
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int N, d, tmp;
    cin >> N;

    while (N % divider(N) != 0)
        N++;

    cout << N << '\n';

    return 0;
}