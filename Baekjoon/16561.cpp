#include <iostream>

using namespace std;

int main(void)
{
    int N;
    cin >> N;

    N = (N / 3) - 3;
    int ans = 0;

    for (int i = 0; i <= N + 1; i++)
    {
        ans += i;
    }

    cout << ans << '\n';

    return 0;
}