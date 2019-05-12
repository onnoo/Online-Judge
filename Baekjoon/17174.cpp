#include <iostream>

using namespace std;

int main(void)
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int N, M;
    cin >> N >> M;

    int sum = N;
    while (N)
    {
        N /= M;
        sum += N;
    }
    cout << sum << '\n';
    return 0;
}