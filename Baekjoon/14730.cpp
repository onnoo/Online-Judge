#include <iostream>

using namespace std;

int main(void)
{
    ios_base::sync_with_stdio(false);
    int N, ans = 0;
    cin >> N;
    for (int i = 0; i < N; i++)
    {
        int S, K;
        cin >> S >> K;
        ans += S * K;
    }
    cout << ans << '\n';

    return 0;
}