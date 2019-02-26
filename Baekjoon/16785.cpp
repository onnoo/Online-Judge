#include <iostream>

using namespace std;

int main(void)
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int A, B, C, ans = 0;
    cin >> A >> B >> C;

    ans += C / (7 * A + B) * 7;
    C %= (7 * A + B);
    for (int i = 0; i < 7 && C > 0; i++)
    {
        C -= A;
        ans += 1;
    }

    cout << ans << '\n';

    return 0;
}