#include <iostream>
#include <string>

using namespace std;

int main(void)
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    long long N, ans = 0, weight = 1;
    string s;
    cin >> N >> s;

    for (int i = 0; i < N; i++)
    {
        ans += (s[i] - 'a' + 1) * weight;
        ans %= 1234567891;
        weight *= 31;
        weight %= 1234567891;
    }

    cout << ans << '\n';

    return 0;
}