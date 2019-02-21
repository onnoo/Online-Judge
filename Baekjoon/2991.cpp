#include <iostream>

using namespace std;

int main(void)
{
    int A, B, C, D, tmp;
    cin >> A >> B >> C >> D;
    for (int i = 0; i < 3; i++)
    {
        int ans = 0;
        cin >> tmp;
        ans += (tmp % (A + B) != 0 && tmp % (A + B) <= A) + (tmp % (C + D) != 0 && tmp % (C + D) <= C);
        cout << ans << '\n';
    }

    return 0;
}